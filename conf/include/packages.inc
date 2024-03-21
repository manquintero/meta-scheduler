# Target Packages
CORE_IMAGE_EXTRA_INSTALL += "tmux tmate htop stress-ng curl xz rsync git connman"
# TODO: Add recipe for pmcarch

# Whole image features
EXTRA_IMAGE_FEATURES += "package-management"
EXTRA_IMAGE_FEATURES += "tools-sdk"

# Kernel development
MACHINE_ESSENTIAL_EXTRA_RRECOMMENDS += "kernel-modules"
