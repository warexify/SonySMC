#!/bin/bash
DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" > /dev/null && pwd)"

# remove SonySMCDaemon
sudo launchctl unload /Library/LaunchAgents/org.warexify.SonySMCDaemon.plist 2> /dev/null
sudo pkill -f SonySMCDaemon
sudo rm /usr/bin/SonySMCDaemon 2> /dev/null
sudo rm /Library/LaunchAgents/org.warexify.SonySMCDaemon.plist 2> /dev/null

# remove old SonySMCDaemon
sudo launchctl unload /Library/LaunchAgents/org.warexify.SonySMCDaemon.plist 2> /dev/null
sudo rm /usr/bin/SonySMCDaemon 2> /dev/null

sudo mkdir -p /usr/local/bin/
sudo chmod -R 755 /usr/local/bin/
sudo cp $DIR/SonySMCDaemon /usr/local/bin/
sudo chmod 755 /usr/local/bin/SonySMCDaemon
sudo chown root:wheel /usr/local/bin/SonySMCDaemon

sudo cp $DIR/org.warexify.SonySMCDaemon.plist /Library/LaunchAgents
sudo chmod 644 /Library/LaunchAgents/org.warexify.SonySMCDaemon.plist
sudo chown root:wheel /Library/LaunchAgents/org.warexify.SonySMCDaemon.plist

sudo launchctl load /Library/LaunchAgents/org.warexify.SonySMCDaemon.plist
