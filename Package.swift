// swift-tools-version:5.2
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "Ptrace",
    products: [
        .library(name: "Ptrace", targets: ["PtraceSwift"])
    ],
    dependencies: [],
    targets: [
        .target(
            name: "PtraceSwift",
            dependencies: ["PtraceC"],
            path: "Sources/PtraceSwift"),
        .target(
            name: "PtraceC",
            path: "Sources/PtraceC"),
    ]
)
