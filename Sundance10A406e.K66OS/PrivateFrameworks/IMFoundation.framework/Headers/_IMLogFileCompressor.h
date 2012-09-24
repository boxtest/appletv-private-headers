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
+ (id)sharedInstance;	// 0x3689764d
- (id)init;	// 0x368976f9
- (void)compressPath:(id)path toPath:(id)path2;	// 0x368977a9
- (void)dealloc;	// 0x3689775d
- (void)fileCopierDidFinish:(id)fileCopier;	// 0x3689788d
- (void)fileCopierDidStart:(id)fileCopier;	// 0x36897889
@end
