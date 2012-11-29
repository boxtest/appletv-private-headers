/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "AVFoundation-Structs.h"

@class AVPlayerItemErrorLogInternal, NSArray;

@interface AVPlayerItemErrorLog : NSObject <NSCopying> {
	AVPlayerItemErrorLogInternal *_playerItemErrorLog;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x34247449; 
- (id)init;	// 0x34247129
- (id)initWithLogArray:(id)logArray;	// 0x342471c1
- (id)_errorLogArray;	// 0x342475c9
- (id)copyWithZone:(NSZone *)zone;	// 0x342472f9
- (void)dealloc;	// 0x3424734d
- (id)description;	// 0x34247215
// declared property getter: - (id)events;	// 0x34247449
- (id)extendedLogData;	// 0x342473b9
- (unsigned)extendedLogDataStringEncoding;	// 0x34247445
- (void)finalize;	// 0x34247309
@end
