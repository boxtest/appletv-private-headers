/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class DAMessageMoveRequest, NSString;

@interface DAMoveResponse : NSObject {
	int _status;	// 4 = 0x4
	NSString *_sourceID;	// 8 = 0x8
	NSString *_destID;	// 12 = 0xc
	DAMessageMoveRequest *_origRequest;	// 16 = 0x10
}
@property(readonly, assign) NSString *destID;	// G=0x32177a09; @synthesize=_destID
@property(retain) DAMessageMoveRequest *origRequest;	// G=0x32177a1d; S=0x32177a31; @synthesize=_origRequest
@property(readonly, assign) NSString *sourceID;	// G=0x321779f5; @synthesize=_sourceID
@property(readonly, assign) int status;	// G=0x321779e1; @synthesize=_status
- (id)initWithStatus:(int)status sourceID:(id)anId destID:(id)anId3;	// 0x3217783d
- (void)dealloc;	// 0x32177969
- (id)description;	// 0x321778c5
// declared property getter: - (id)destID;	// 0x32177a09
// declared property getter: - (id)origRequest;	// 0x32177a1d
// declared property setter: - (void)setOrigRequest:(id)request;	// 0x32177a31
// declared property getter: - (id)sourceID;	// 0x321779f5
// declared property getter: - (int)status;	// 0x321779e1
@end
