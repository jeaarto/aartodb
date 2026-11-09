# AartoDB

AartoDB is a small key-value database project written in C++. I'm building it from scratch to learn how a storage engine saves data and recovers it on startup.

## Project status

Early development. The first milestone is an interactive command loop in the terminal.

## Roadmap

- [ ] Read commands from the terminal and support `EXIT`.
- [ ] Implement `SET`, `GET`, and `DELETE` for data stored in memory.
- [ ] Append changes to a log file and replay them on startup.
- [ ] Test recovery when the last log entry is incomplete.
