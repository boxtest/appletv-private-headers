/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "AVFoundation-Structs.h"

@class NSDate, NSString, AVPlayerItemErrorLogEventInternal;

@interface AVPlayerItemErrorLogEvent : NSObject <NSCopying> {
	AVPlayerItemErrorLogEventInternal *_playerItemErrorLogEvent;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x302cf7f5; 
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x302cf781; 
@property(readonly, assign, nonatomic) NSString *errorComment;	// G=0x302cfa21; 
@property(readonly, assign, nonatomic) NSString *errorDomain;	// G=0x302cf9ad; 
@property(readonly, assign, nonatomic) int errorStatusCode;	// G=0x302cf951; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x302cf8dd; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x302cf869; 
- (id)init;	// 0x302cf5d5
- (id)initWithDictionary:(id)dictionary;	// 0x302cf66d
// declared property getter: - (id)URI;	// 0x302cf7f5
- (id)copyWithZone:(NSZone *)zone;	// 0x302cf6c1
// declared property getter: - (id)date;	// 0x302cf781
- (void)dealloc;	// 0x302cf715
// declared property getter: - (id)errorComment;	// 0x302cfa21
// declared property getter: - (id)errorDomain;	// 0x302cf9ad
// declared property getter: - (int)errorStatusCode;	// 0x302cf951
- (void)finalize;	// 0x302cf6d1
// declared property getter: - (id)playbackSessionID;	// 0x302cf8dd
// declared property getter: - (id)serverAddress;	// 0x302cf869
@end

