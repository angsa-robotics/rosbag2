// Copyright 2019 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#ifndef ROSBAG2_COMPRESSION__FAKE_COMPRESSOR_HPP_
#define ROSBAG2_COMPRESSION__FAKE_COMPRESSOR_HPP_

#include <string>

#include "rosbag2_compression/base_compressor_interface.hpp"
#include "rosbag2_compression/visibility_control.hpp"
#include "rosbag2_storage/serialized_bag_message.hpp"

class ROSBAG2_COMPRESSION_PUBLIC FakeCompressor : public rosbag2_compression::
  BaseCompressorInterface
{
public:
  FakeCompressor() = default;

  std::string compress_uri(const std::string & uri) override;

  void compress_serialized_bag_message(
    rosbag2_storage::SerializedBagMessage * bag_message) override;

  std::string get_compression_identifier() const override;

  ~FakeCompressor() override = default;
};

#endif  // ROSBAG2_COMPRESSION__FAKE_COMPRESSOR_HPP_
