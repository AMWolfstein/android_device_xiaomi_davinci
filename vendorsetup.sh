# nuke
rm -rf vendor/xiaomi
rm -rf kernel/xiaomi

# clone
git clone -b 15 --depth=1 https://gitlab.com/PixelOS-Devices/playgroundtc.git prebuilts/clang/host/linux-x86/clang-playground
git clone -b 13x --depth=1 https://github.com/helliscloser/kernel_xiaomi_sm6150.git kernel/xiaomi/sm6150
git clone -b A13 https://github.com/AMWolfstein/android_vendor_xiaomi.git vendor/xiaomi
