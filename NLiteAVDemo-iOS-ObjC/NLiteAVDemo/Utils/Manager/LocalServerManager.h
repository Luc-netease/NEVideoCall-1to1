// Copyright (c) 2022 NetEase, Inc. All rights reserved.
// Use of this source code is governed by a MIT license that can be
// found in the LICENSE file.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LocalServerManager : NSObject

+ (id)shareInstance;

- (void)startServer;

@end

NS_ASSUME_NONNULL_END
