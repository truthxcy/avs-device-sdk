/*
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *     http://aws.amazon.com/apache2.0/
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#ifndef ALEXA_CLIENT_SDK_AVSCOMMON_UTILS_INCLUDE_AVSCOMMON_UTILS_TIMING_TIMERDELEGATEFACTORY_H_
#define ALEXA_CLIENT_SDK_AVSCOMMON_UTILS_INCLUDE_AVSCOMMON_UTILS_TIMING_TIMERDELEGATEFACTORY_H_

#include <memory>
#include <AVSCommon/SDKInterfaces/Timing/TimerDelegateFactoryInterface.h>

namespace alexaClientSDK {
namespace avsCommon {
namespace utils {
namespace timing {

class TimerDelegateFactory : public avsCommon::sdkInterfaces::timing::TimerDelegateFactoryInterface {
public:
    /// @name TimerDelegateFactoryInterface Functions
    /// @{
    bool supportsLowPowerMode() override;
    std::unique_ptr<sdkInterfaces::timing::TimerDelegateInterface> getTimerDelegate() override;
    /// @}
};

}  // namespace timing
}  // namespace utils
}  // namespace avsCommon
}  // namespace alexaClientSDK

#endif  // ALEXA_CLIENT_SDK_AVSCOMMON_UTILS_INCLUDE_AVSCOMMON_UTILS_TIMING_TIMERDELEGATEFACTORY_H_
