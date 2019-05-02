// Copyright 2019 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef ROSIDL_TYPESUPPORT_FASTRTPS_CPP__WSTRING_CONVERSION_HPP_
#define ROSIDL_TYPESUPPORT_FASTRTPS_CPP__WSTRING_CONVERSION_HPP_

#include <rosidl_typesupport_fastrtps_cpp/visibility_control.h>

#include <string>

namespace rosidl_typesupport_fastrtps_cpp
{

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC
void u16string_to_wstring(const std::u16string & u16str, std::wstring & wstr);

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC
bool wstring_to_u16string(const std::wstring & wstr, std::u16string & u16str);

}  // namespace rosidl_typesupport_fastrtps_cpp

#endif  // ROSIDL_TYPESUPPORT_FASTRTPS_CPP__WSTRING_CONVERSION_HPP_