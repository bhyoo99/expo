/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <ABI46_0_0React/ABI46_0_0RCTInvalidating.h>
#import <ABI46_0_0React/ABI46_0_0RCTURLRequestHandler.h>

typedef NSURLSessionConfiguration* (^NSURLSessionConfigurationProvider)(void);
/**
 *  The block provided via this function will provide the NSURLSessionConfiguration for all HTTP requests made by the app.
*/
ABI46_0_0RCT_EXTERN void ABI46_0_0RCTSetCustomNSURLSessionConfigurationProvider(NSURLSessionConfigurationProvider);
/**
 * This is the default ABI46_0_0RCTURLRequestHandler implementation for HTTP requests.
 */
@interface ABI46_0_0RCTHTTPRequestHandler : NSObject <ABI46_0_0RCTURLRequestHandler, ABI46_0_0RCTInvalidating>

@end
