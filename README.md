Building keystone separately
===

### Pre-requisite libraries needed:     

- **ubuntu 18.04**
- **Access to github's network**
- **Git version >= 2.11.0**

```bash
sudo apt update
```

```bash
sudo apt install autoconf automake autotools-dev bc \
bison build-essential curl expat libexpat1-dev flex gawk gcc git \
gperf libgmp-dev libmpc-dev libmpfr-dev libtool texinfo tmux \
patchutils zlib1g-dev wget bzip2 patch vim-common lbzip2 python3 \
pkg-config libglib2.0-dev libpixman-1-dev libssl-dev screen \
device-tree-compiler expect makeself unzip cpio rsync cmake ninja-build p7zip-full
```

### Build keystone enclave frame

```bash
./fast-setup.sh
source ./source.sh
source ./modify-root-size.sh
source ~/.bashrc
mkdir build
cd build
cmake ..
make 
```

### Test

In the `build/` folder:

```bash
make tests

find ./examples/tests -name '*.ke' -exec cp \{\} ./overlay/root/ \;

make image

./scripts/run-qemu.sh
```

Login as `root` with the password `sifive`.

In the `QEMU`:

```bash
insmod keystone-driver.ko

./tests.ke
```