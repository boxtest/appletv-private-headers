/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSCopying.h"
#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVPlayerItemErrorLogInternal, NSArray;

@interface AVPlayerItemErrorLog : NSObject <NSCopying> {
@private
	AVPlayerItemErrorLogInternal *_playerItemErrorLog;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x30b24049; 
- (id)init;	// 0x30b23d25
- (id)initWithLogArray:(id)logArray;	// 0x30b23dbd
- (id)_errorLogArray;	// 0x30b241b1
- (id)copyWithZone:(NSZone *)zone;	// 0x30b23ef5
- (void)dealloc;	// 0x30b23f49
- (id)description;	// 0x30b23e11
// declared property getter: - (id)events;	// 0x30b24049
- (id)extendedLogData;	// 0x30b23fb9
- (unsigned)extendedLogDataStringEncoding;	// 0x30b24045
- (void)finalize;	// 0x30b23f05
@end
