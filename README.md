all the files in this repo are for personal practice of concepts

customizing vi/vim

This explains how to set up Vim(specfically Gvim) on Ubuntu on Windows Subsystem for Linux 2 (WSL2) to activate GUI interface.

Environments
Windows 10
Ubuntu on Windows Subsystem for Linux 2 (WSL2)
Steps
1. Install vim/gvim with:
sudo apt install vim-gtk3
2. Set up VcXsrv Windows X Server
Download and install VcXsrv Windows X Server, then run XLaunch with the following options:

Multiple windows (default)
Start no client (default)
Extra settings
Clipboard (default)
Primary Selection (default)
Native opengl (default)
Disable access control
Basically, you just need to tick all of the extra options. Other than that, every setting is the default. Click the [Save configuration] button and save the configuration in C:\Users\<USER NAME>\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Startup in order to start VcXsrv when Windows starts.

3. Connect VxXsrv from Ubuntu on WSL2
Log in to Ubuntu on WSL2 and set the DISPLAY environment variable:

LOCAL_IP=$(cat /etc/resolv.conf | grep nameserver | awk '{print $2}')
export DISPLAY=$LOCAL_IP:0
or set the DISPLAY variable checking the nameserver in the /etc/resolv.conf file.

export DISPLAY=$(grep nameserver /etc/resolv.conf | awk '{print $2}'):0.0
Another alternative if you use you notebook with a WiFi connection and multiple virtual networks. Determine the Windows IP address using route.exe and check the interface used in the default gateway

export DISPLAY=$(route.exe print | grep 0.0.0.0 | head -1 | awk '{print $4}'):0.0
4. After you may also set the DISPLAY variable in your ~/.profile file, by adding
# set DISPLAY to use X terminal in WSL
# in WSL2 the localhost and network interfaces are not the same than windows
if grep -q WSL2 /proc/version; then
    /*## any of the methods used in "step 3" above ##*/

else
    # In WSL1 the DISPLAY can be the localhost address
    if grep -q icrosoft /proc/version; then
        DISPLAY=127.0.0.1:0.0
    fi

fi
That's it! Enjoy your Vim life on Windows!

References
Xfce4 Desktop Environment and X Server for Ubuntu on WSL 2
How do I copy whole text from vim to clipboard at once?
necojackrc - Setup vim with clipboard on ubuntu on WSL2
WSL 2: Run Graphical Linux Desktop Applications from Windows 10 Bash Shell "Error E233: cannot open display"
