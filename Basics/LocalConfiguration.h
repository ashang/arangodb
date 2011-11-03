/* Common/C/Philadelphia/Basics/LocalConfiguration.h.  Generated from LocalConfiguration.h.in by configure.  */
////////////////////////////////////////////////////////////////////////////////
/// @brief High-Performance Database Framework made by triagens
///
/// @file
///
/// DISCLAIMER
///
/// Copyright 2010-2011 triagens GmbH, Cologne, Germany
///
/// Licensed under the Apache License, Version 2.0 (the "License");
/// you may not use this file except in compliance with the License.
/// You may obtain a copy of the License at
///
///     http://www.apache.org/licenses/LICENSE-2.0
///
/// Unless required by applicable law or agreed to in writing, software
/// distributed under the License is distributed on an "AS IS" BASIS,
/// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
/// See the License for the specific language governing permissions and
/// limitations under the License.
///
/// Copyright holder is triAGENS GmbH, Cologne, Germany
///
/// @author Dr. Frank Celler
/// @author Copyright 2011, triagens GmbH, Cologne, Germany
////////////////////////////////////////////////////////////////////////////////

#ifndef TRIAGENS_BASICS_CONFIGURATION_H
#define TRIAGENS_BASICS_CONFIGURATION_H 1

#ifndef TRI_WITHIN_COMMON
#error use <Basics/Common.h>
#endif

// -----------------------------------------------------------------------------
// --SECTION--                                     Special Configuration Options
// -----------------------------------------------------------------------------

////////////////////////////////////////////////////////////////////////////////
/// @addtogroup Configuration Configuration
/// @{
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
/// @brief enable calculation of timing figures
////////////////////////////////////////////////////////////////////////////////

#define TRI_ENABLE_FIGURES 1

////////////////////////////////////////////////////////////////////////////////
/// @brief enable logging
////////////////////////////////////////////////////////////////////////////////

#define TRI_ENABLE_LOGGER 1

////////////////////////////////////////////////////////////////////////////////
/// @brief enable logging of timings
////////////////////////////////////////////////////////////////////////////////

#define TRI_ENABLE_LOGGER_TIMING 1

////////////////////////////////////////////////////////////////////////////////
/// @brief enable timings
////////////////////////////////////////////////////////////////////////////////

#define TRI_ENABLE_TIMING 1

////////////////////////////////////////////////////////////////////////////////
/// @}
////////////////////////////////////////////////////////////////////////////////

#endif
