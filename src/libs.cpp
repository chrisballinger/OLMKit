/* Copyright 2015 OpenMarket Ltd
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
extern "C" {
#include "crypto-algorithms/sha256.c"
#include "crypto-algorithms/aes.c"
#include "curve25519-donna/curve25519-donna.c"
#define select ed25519_select
#include "ed25519/src/fe.c"
#include "ed25519/src/sc.c"
#include "ed25519/src/ge.c"
#include "ed25519/src/sha512.c"
#include "ed25519/src/verify.c"
#include "ed25519/src/sign.c"
#include "ed25519_additions.c"
}
