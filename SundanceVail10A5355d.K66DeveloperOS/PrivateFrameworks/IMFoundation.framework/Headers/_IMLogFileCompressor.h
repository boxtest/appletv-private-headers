/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library
#import "IMFileCopierDelegate.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _IMLogFileCompressor : NSObject <IMFileCopierDelegate> {
	NSMutableArray *_archivers;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x329b4c4d
- (id)init;	// 0x329b4cf9
- (void)compressPath:(id)path toPath:(id)path2;	// 0x329b4da9
- (void)dealloc;	// 0x329b4d5d
- (void)fileCopierDidFinish:(id)fileCopier;	// 0x329b4e8d
- (void)fileCopierDidStart:(id)fileCopier;	// 0x329b4e89
@end
