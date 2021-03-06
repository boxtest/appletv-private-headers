/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, MPMediaQuery, NSString;

@interface MPMediaQueryLogProxy : NSObject {
@private
	MPMediaQuery *_target;	// 4 = 0x4
	MPMediaQuery *_baseObject;	// 8 = 0x8
	NSMutableArray *_loggedInvocations;	// 12 = 0xc
	NSString *_filePath;	// 16 = 0x10
}
- (id)initWithTarget:(id)target;	// 0x35b860b9
- (id)copyWithZone:(NSZone *)zone;	// 0x35b86221
- (void)createFilePath;	// 0x35b86649
- (void)dealloc;	// 0x35b86171
- (void)flushLog;	// 0x35b8692d
- (void)forwardInvocation:(id)invocation;	// 0x35b86251
- (id)methodSignatureForSelector:(SEL)selector;	// 0x35b865f5
- (id)replacementObjectForCoder:(id)coder;	// 0x35b86241
- (void)writeLog;	// 0x35b86769
@end

