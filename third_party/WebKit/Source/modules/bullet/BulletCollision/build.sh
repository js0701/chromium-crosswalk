find -name \*.cpp -exec /home/johnson2/android-ndk-r10c/toolchains/x86-4.9/prebuilt/linux-x86_64/bin/i686-linux-android-g++ -I../ -I../include -I/home/johnson2/android-ndk-r10c/platforms/android-19/arch-x86/usr/include -I/home/johnson2/android-ndk-r10c/sources/cxx-stl/gnu-libstdc++/4.9/libs/x86/include/ -I/home/johnson2/android-ndk-r10c/sources/cxx-stl/gnu-libstdc++/4.9/include/ -L/home/johnson2/android-ndk-r10c/platforms/android-19/arch-x86/usr/lib --sysroot=/home/johnson2/android-ndk-r10c/platforms/android-19/arch-x86/ -D__ANDROID__ -D__i386__ -fPIC -O2 -msse2 -ffast-math -m32 -lc -ldl -lstdc++ -lm -c {} \;
find -name \*.o -exec /home/johnson2/android-ndk-r10c/toolchains/x86-4.9/prebuilt/linux-x86_64/bin/i686-linux-android-ar rcs lib$1.a {} \;


