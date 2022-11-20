#!/bin/bash
echo "
░█▀▀░█▀▀░▀█▀░█░█░█▀█░░░█▀▀░█▀▀░█▀▄░█▀█░█▀▄░█▀█
░▀▀█░█▀▀░░█░░█░█░█▀▀░░░█▀▀░█▀▀░█░█░█░█░█▀▄░█▀█
░▀▀▀░▀▀▀░░▀░░▀▀▀░▀░░░░░▀░░░▀▀▀░▀▀░░▀▀▀░▀░▀░▀░▀

------------------- by y3du ------------------
";
echo "UPDATE
--------------------";
sudo dnf update -y

echo "ADD FEDORA FUSION
--------------------";
echo "  -> Free
--------------------";
sudo dnf install \
  https://download1.rpmfusion.org/free/fedora/rpmfusion-free-release-$(rpm -E %fedora).noarch.rpm -y

echo "  -> NonFree
--------------------";
sudo dnf install \
  https://download1.rpmfusion.org/nonfree/fedora/rpmfusion-nonfree-release-$(rpm -E %fedora).noarch.rpm -y
  
echo "UPDATE
--------------------";
sudo dnf update -y

echo  "INSTALL EXA 
--------------------";

sudo dnf install exa -y
