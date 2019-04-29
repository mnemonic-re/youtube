using System;
using System.Diagnostics;
using System.Runtime.InteropServices;

namespace SharpMemoryLib
{
	class SharpMemoryLib
	{
        [Flags]
        public enum ProcessAccessType
        {
            PROCESS_TERMINATE = (0x0001),
            PROCESS_CREATE_THREAD = (0x0002),
            PROCESS_SET_SESSIONID = (0x0004),
            PROCESS_VM_OPERATION = (0x0008),
            PROCESS_VM_READ = (0x0010),
            PROCESS_VM_WRITE = (0x0020),
            PROCESS_DUP_HANDLE = (0x0040),
            PROCESS_CREATE_PROCESS = (0x0080),
            PROCESS_SET_QUOTA = (0x0100),
            PROCESS_SET_INFORMATION = (0x0200),
            PROCESS_QUERY_INFORMATION = (0x0400)
        }

        public const uint PROCESS_VM_READ = (0x0010);
        public const uint PROCESS_VM_WRITE = (0x0020);

        [DllImport("kernel32.dll")]
		public static extern IntPtr OpenProcess(UInt32 dwDesiredAccess, Int32 bInheritHandle, UInt32 dwProcessId);

		[DllImport("kernel32.dll")]
		public static extern Int32 ReadProcessMemory(IntPtr hProcess, IntPtr lpBaseAddress,[In, Out] byte[] buffer, UInt32 size, out IntPtr lpNumberOfBytesRead);

        [DllImport("kernel32.dll")]
        public static extern Int32 WriteProcessMemory(IntPtr hProcess, IntPtr lpBaseAddress, [In, Out] byte[] buffer, UInt32 size, out IntPtr lpNumberOfBytesWritten);

        [DllImport("kernel32.dll")]
		public static extern Int32 CloseHandle(IntPtr hObject);
	}

	public class ProcessReader
	{

		public ProcessReader()
		{		}

		public Process ReadProcess
		{
			get	{ return m_ReadProcess; }
			set { m_ReadProcess = value; }
		}

		private Process m_ReadProcess = null;

		private IntPtr m_hProcess = IntPtr.Zero;

		public void OpenProcess()
		{
            SharpMemoryLib.ProcessAccessType access;
            access = SharpMemoryLib.ProcessAccessType.PROCESS_VM_READ | SharpMemoryLib.ProcessAccessType.PROCESS_VM_WRITE | SharpMemoryLib.ProcessAccessType.PROCESS_VM_OPERATION;
            m_hProcess = SharpMemoryLib.OpenProcess((uint)access, 1, (uint)m_ReadProcess.Id);
        }

		public byte[] ReadProcessMemory(IntPtr memoryAddress, uint bytesToRead, out int bytesReaded)
		{
			byte[] buffer = new byte[bytesToRead];
			
			IntPtr ptrBytesReaded;
			SharpMemoryLib.ReadProcessMemory(m_hProcess, memoryAddress, buffer ,bytesToRead,out ptrBytesReaded);
			bytesReaded = ptrBytesReaded.ToInt32();

			return buffer;
		}

        public void WriteProcessMemory(IntPtr memoryAddress, byte[] bytesToWrite, out int bytesWritten)
        {
            IntPtr ptrBytesWritten;
            SharpMemoryLib.WriteProcessMemory(m_hProcess, memoryAddress, bytesToWrite, (uint)bytesToWrite.Length, out ptrBytesWritten);
            bytesWritten = ptrBytesWritten.ToInt32();
        }

        public void CloseHandle()
		{
			int iRetValue;
			iRetValue = SharpMemoryLib.CloseHandle(m_hProcess);
			if (iRetValue == 0)
				throw new Exception("CloseHandle failed");
		}
	}
}
