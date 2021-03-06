/******************************************************************************
 *
 * brica2/core/utils.hpp
 *
 * @author Copyright (C) 2016 Kotone Itaya
 * @version 1.0.0
 * @created  2016/06/29 Kotone Itaya -- Created!
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

#ifndef __BRICA2_CORE_UTILS__
#define __BRICA2_CORE_UTILS__

#include <boost/python.hpp>

#include "brica2/core/types.hpp"

#include <list>
#include <memory>

namespace brica2 {
  namespace core {
    namespace utils {
      namespace py = boost::python;

      std::size_t accumulate(std::list<std::size_t> shape);

      py::object buffer2py(const char* buffer, std::size_t bytes);

      py::tuple shape2py(shape_t shape);
    }
  }
}

#endif
