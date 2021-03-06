// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROMECAST_MEDIA_AUDIO_MIXER_SERVICE_RECEIVER_RECEIVER_CREATION_H_
#define CHROMECAST_MEDIA_AUDIO_MIXER_SERVICE_RECEIVER_RECEIVER_CREATION_H_

#include <memory>

#include "chromecast/media/audio/mixer_service/receiver/receiver.h"

namespace chromecast {
namespace media {
class MediaPipelineBackendManager;

namespace mixer_service {

class ReceiverInstance {
 public:
  virtual ~ReceiverInstance() = default;
};

// Creates a mixer service receiver that uses CMA backend for output, if there
// is no real mixer implementation. If there is a real mixer, then returns
// nullptr.
std::unique_ptr<ReceiverInstance> CreateCmaReceiverIfNeeded(
    MediaPipelineBackendManager* backend_manager);

}  // namespace mixer_service
}  // namespace media
}  // namespace chromecast

#endif  // CHROMECAST_MEDIA_AUDIO_MIXER_SERVICE_RECEIVER_RECEIVER_CREATION_H_
