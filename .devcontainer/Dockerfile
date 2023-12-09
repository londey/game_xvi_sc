FROM ubuntu:latest

# Install necessary libraries
RUN DEBIAN_FRONTEND=noninteractive TZ=Etc/UTC \
    apt-get update \
    && apt-get install -y tzdata \
    && apt-get install -y \
        build-essential \
        clang \
        cmake \
        curl \
        git \
        pkg-config \
        tar \
        unzip \
        zip \
    && rm -rf /var/lib/apt/lists/*


RUN cd /opt \
    && git clone https://github.com/Microsoft/vcpkg.git \
    && cd vcpkg \
    && ./bootstrap-vcpkg.sh \
    && ./vcpkg install \
        fmt \
        gtest \
        ms-gsl \
        systemc


#         wget \
#         fpga-icestorm \
#         libftdi-dev \
#         libusb-1.0-0-dev \
#         nextpnr-ice40 \
#         yosys \
#     # pkg-config \
#     # python3 \
#     # python3-pip \

# # Install Rust
# RUN curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh -s -- -y
# ENV PATH="/root/.cargo/bin:${PATH}"

# # Install ice40storm FPGA compiler
# RUN git clone https://github.com/cliffordwolf/icestorm.git icestorm \
#     && cd icestorm \
#     && make -j$(nproc) \
#     && make install
