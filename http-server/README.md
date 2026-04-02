# 🚀 High-Performance HTTP Server

## Project Goal
Build a production-grade HTTP server in C++ that can handle **10,000+ concurrent connections** with sub-millisecond latency.

## What You'll Learn
- ✅ Socket programming & TCP/IP
- ✅ HTTP/1.1 protocol implementation
- ✅ Thread pools & concurrency patterns
- ✅ Memory management & optimization
- ✅ Event-driven I/O (epoll/kqueue)
- ✅ Zero-copy techniques
- ✅ Performance profiling
- ✅ Production features (HTTPS, logging, rate limiting)

## Tech Stack
- **Language**: C++17
- **Build**: CMake
- **Testing**: GoogleTest (optional)
- **Benchmark**: `ab`, `wrk`
- **Profile**: `perf`, AddressSanitizer

## Architecture Overview

```
┌─────────────────────────────────────────┐
│           Client Requests               │
└───────────────┬─────────────────────────┘
                │
                ▼
┌─────────────────────────────────────────┐
│         Socket Layer (TCP)              │
│    accept(), recv(), send()             │
└───────────────┬─────────────────────────┘
                │
                ▼
┌─────────────────────────────────────────┐
│         Thread Pool                     │
│    [Worker 1] [Worker 2] [Worker 3]     │
└───────────────┬─────────────────────────┘
                │
                ▼
┌─────────────────────────────────────────┐
│      HTTP Request Parser                │
│    Method, Path, Headers, Body          │
└───────────────┬─────────────────────────┘
                │
                ▼
┌─────────────────────────────────────────┐
│         Router/Handler                  │
│    Static files, API endpoints          │
└───────────────┬─────────────────────────┘
                │
                ▼
┌─────────────────────────────────────────┐
│         HTTP Response                   │
│    Status, Headers, Body                │
└─────────────────────────────────────────┘
```

## Milestones

### Phase 1: Foundation (Days 24-35)
- [ ] TCP server accepting connections
- [ ] HTTP request parsing
- [ ] Serve static files
- [ ] Multi-threaded (one thread per connection)
- [ ] Thread pool implementation

### Phase 2: Concurrency (Days 36-50)
- [ ] Thread-safe connection handling
- [ ] Lock-free counters
- [ ] Connection pooling (keep-alive)
- [ ] 1000+ requests/sec

### Phase 3: Performance (Days 51-65)
- [ ] Memory pools
- [ ] Zero-copy I/O
- [ ] epoll/kqueue (event-driven)
- [ ] Match nginx on static files

### Phase 4: Production (Days 66-80)
- [ ] Routing system
- [ ] Async logging
- [ ] HTTPS/TLS
- [ ] Graceful shutdown
- [ ] Rate limiting

### Phase 5: Advanced (Days 81-100)
- [ ] HTTP/2 support
- [ ] Lock-free structures
- [ ] Load balancing
- [ ] Metrics endpoint
- [ ] Blog post + open source

## Getting Started

### Prerequisites
- C++17 compiler (GCC 7+, Clang 5+, or MSVC 2017+)
- CMake 3.16+
- Basic C++ knowledge (classes, pointers, STL)

### Build Instructions
```bash
# Create build directory
mkdir build && cd build

# Configure
cmake ..

# Build
cmake --build . --config Release

# Run
./http-server
```

### Test with curl
```bash
curl http://localhost:8080/
```

### Benchmark with ab (Apache Bench)
```bash
ab -n 10000 -c 100 http://localhost:8080/
```

## Project Structure
```
http-server/
├── src/           # Implementation files
├── include/       # Header files
├── tests/         # Unit tests
├── benchmarks/    # Performance tests
├── CMakeLists.txt
└── README.md
```

## Resources
- See `/resources/books.md` for reading list
- See `/resources/videos.md` for video tutorials
- Study: nginx, muduo, cpp-httplib source code

## Daily Progress
Track your learning in `/Day XX/README.md` files

---

**Ready to build something amazing?** 🚀
