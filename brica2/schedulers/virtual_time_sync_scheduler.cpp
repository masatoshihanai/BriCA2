/******************************************************************************
 *
 * brica2/schedulers/virtual_time_sync_scheduler.cpp
 *
 * @author Copyright (C) 2016 Kotone Itaya
 * @version 1.0.0
 * @created  2016/07/01 Kotone Itaya -- Created!
 * @@
 *
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 *
 *****************************************************************************/

#include "brica2/schedulers/virtual_time_sync_scheduler.hpp"

namespace brica2 {
  namespace schedulers {
    VirtualTimeSyncScheduler::VirtualTimeSyncScheduler(core::Agent agent, double interval)
      : Scheduler(agent), interval(interval) {}

    double VirtualTimeSyncScheduler::step() {
      for(std::size_t i = 0; i < components.size(); ++i) {
        (*components[i]).input(time);
        (*components[i])();
      }

      time += interval;

      for(std::size_t i = 0; i < components.size(); ++i) {
        (*components[i]).output(time);
      }

      return time;
    }
  }
}
