#include "configuration.hpp"
#include "environment.hpp"
#include "shared_state.hpp"
#include "state.hpp"

#include "diagnostics/profiler.hpp"

namespace rubinius {
  namespace diagnostics {
    bool operator==(const ProfilerEntryKey& a, const ProfilerEntryKey& b) {
      return a.serial == b.serial && a.ip == b.ip;
    }
  }
}
