/*
 * Copyright (c) 2023 Samsung Electronics Co., Ltd. All Rights Reserved
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef LUCI_INTERPRETER_TEST_MODELS_MUL_KERNEL_INT_H
#define LUCI_INTERPRETER_TEST_MODELS_MUL_KERNEL_INT_H

#include "TestDataMulBase.h"

namespace luci_interpreter
{
namespace test_kernel
{
namespace mul_int_with_broadcasting
{

/*
 * Mul Kernel:
 *
 * Input_1(2, 5)   Input_2(2, 1)
 *       \             /
 *     Mul(with broadcast)
 *              |
 *          Output(2, 5)
 */
const unsigned char test_kernel_model_circle[] = {
  0x18, 0x00, 0x00, 0x00, 0x43, 0x49, 0x52, 0x30, 0x00, 0x00, 0x0e, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x08, 0x00, 0x10, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0xc0, 0x00, 0x00, 0x00, 0x18, 0x02, 0x00, 0x00, 0x34, 0x02, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0xac, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00,
  0x74, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x9a, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x58, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0c, 0x00,
  0x08, 0x00, 0x07, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x32, 0x2e, 0x31, 0x31, 0x2e, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00,
  0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x31, 0x2e, 0x35, 0x2e, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xb8, 0xfe, 0xff, 0xff, 0xbc, 0xfe, 0xff, 0xff, 0xc0, 0xfe, 0xff, 0xff, 0xc4, 0xfe, 0xff, 0xff,
  0x01, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x14, 0x00,
  0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x14, 0x00, 0x00, 0x00, 0x10, 0x00, 0x0c, 0x00,
  0x07, 0x00, 0x08, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x0c, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x30, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x92, 0xff, 0xff, 0xff, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x00, 0x00, 0x84, 0xff, 0xff, 0xff,
  0x03, 0x00, 0x00, 0x00, 0x4d, 0x75, 0x6c, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0xc2, 0xff, 0xff, 0xff, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x1c, 0x00, 0x00, 0x00, 0xb4, 0xff, 0xff, 0xff,
  0x0d, 0x00, 0x00, 0x00, 0x50, 0x6c, 0x61, 0x63, 0x65, 0x68, 0x6f, 0x6c, 0x64, 0x65, 0x72, 0x5f,
  0x31, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x14, 0x00, 0x13, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00,
  0x0e, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x02, 0x1c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x50, 0x6c, 0x61, 0x63, 0x65, 0x68, 0x6f, 0x6c, 0x64, 0x65, 0x72, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x11, 0x00, 0x00, 0x00,
  0x4f, 0x4e, 0x45, 0x2d, 0x74, 0x66, 0x6c, 0x69, 0x74, 0x65, 0x32, 0x63, 0x69, 0x72, 0x63, 0x6c,
  0x65, 0x00, 0x00, 0x00};

const std::vector<int32_t> input1_data = {-5, 5, 5, -4, -4, 15, -13, 23, 5, 5};
const std::vector<int32_t> input2_data = {-2, 14};
const std::vector<int32_t> reference_output_data = {10, -10, -10, 8, 8, 210, -182, 322, 70, 70};

} // namespace mul_int_with_broadcasting

namespace mul_int_no_broadcasting
{
/*
 * Mul Kernel:
 *
 * Input_1(2, 5)   Input_2(2, 5)
 *       \             /
 *     Mul(no broadcast)
 *              |
 *          Output(2, 5)
 */
const unsigned char test_kernel_model_circle[] = {
  0x18, 0x00, 0x00, 0x00, 0x43, 0x49, 0x52, 0x30, 0x00, 0x00, 0x0e, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x08, 0x00, 0x10, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0xc0, 0x00, 0x00, 0x00, 0x18, 0x02, 0x00, 0x00, 0x34, 0x02, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0xac, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00,
  0x74, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x9a, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x58, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0c, 0x00,
  0x08, 0x00, 0x07, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x32, 0x2e, 0x31, 0x31, 0x2e, 0x30, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00,
  0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x31, 0x2e, 0x35, 0x2e, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xb8, 0xfe, 0xff, 0xff, 0xbc, 0xfe, 0xff, 0xff, 0xc0, 0xfe, 0xff, 0xff, 0xc4, 0xfe, 0xff, 0xff,
  0x01, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x14, 0x00,
  0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x14, 0x00, 0x00, 0x00, 0x10, 0x00, 0x0c, 0x00,
  0x07, 0x00, 0x08, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x0c, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x30, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x92, 0xff, 0xff, 0xff, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x00, 0x00, 0x84, 0xff, 0xff, 0xff,
  0x03, 0x00, 0x00, 0x00, 0x4d, 0x75, 0x6c, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0xc2, 0xff, 0xff, 0xff, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x1c, 0x00, 0x00, 0x00, 0xb4, 0xff, 0xff, 0xff,
  0x0d, 0x00, 0x00, 0x00, 0x50, 0x6c, 0x61, 0x63, 0x65, 0x68, 0x6f, 0x6c, 0x64, 0x65, 0x72, 0x5f,
  0x31, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x14, 0x00, 0x13, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00,
  0x0e, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x02, 0x1c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x50, 0x6c, 0x61, 0x63, 0x65, 0x68, 0x6f, 0x6c, 0x64, 0x65, 0x72, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x11, 0x00, 0x00, 0x00,
  0x4f, 0x4e, 0x45, 0x2d, 0x74, 0x66, 0x6c, 0x69, 0x74, 0x65, 0x32, 0x63, 0x69, 0x72, 0x63, 0x6c,
  0x65, 0x00, 0x00, 0x00};

std::vector<int32_t> input1_data = {5, 3, -3, 5, 14, 14, -3, 33, -11, 24};
std::vector<int32_t> input2_data = {5, -3, 5, 5, 25, 5, -4, -2, 5, 25};
std::vector<int32_t> reference_output_data = {25, -9, -15, 25, 350, 70, 12, -66, -55, 600};

} // namespace mul_int_no_broadcasting

class TestDataIntMul : public TestDataMulBase<int32_t>
{
public:
  explicit TestDataIntMul(bool is_with_broadcast) : TestDataMulBase<int32_t>(is_with_broadcast)
  {
    if (is_with_broadcast)
    {
      _input1_data = mul_int_with_broadcasting::input1_data;
      _input2_data = mul_int_with_broadcasting::input2_data;
      _reference_output_data = mul_int_with_broadcasting::reference_output_data;
      _test_kernel_model_circle = mul_int_with_broadcasting::test_kernel_model_circle;
    }
    else
    {
      _input1_data = mul_int_no_broadcasting::input1_data;
      _input2_data = mul_int_no_broadcasting::input2_data;
      _reference_output_data = mul_int_no_broadcasting::reference_output_data;
      _test_kernel_model_circle = mul_int_no_broadcasting::test_kernel_model_circle;
    }
  }

  ~TestDataIntMul() override = default;
};

} // namespace test_kernel
} // namespace luci_interpreter

#endif // LUCI_INTERPRETER_TEST_MODELS_MUL_KERNEL_INT_H