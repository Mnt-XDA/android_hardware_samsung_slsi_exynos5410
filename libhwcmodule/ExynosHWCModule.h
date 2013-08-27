/*
 * Copyright (C) 2012 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANDROID_EXYNOS_HWC_MODULE_H_
#define ANDROID_EXYNOS_HWC_MODULE_H_
const size_t GSC_DST_W_ALIGNMENT_RGB888 = 32;
const size_t GSC_DST_CROP_W_ALIGNMENT_RGB888 = 32;
#define VSYNC_DEV_NAME  "/sys/devices/platform/exynos5-fb.1/vsync"
#define MIXER_UPDATE
#define SUPPORT_GSC_LOCAL_PATH
#define HWC_DYNAMIC_RECOMPOSITION
#endif
