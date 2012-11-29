/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"


@interface MPServerObject : NSObject {
	int _clientPID;	// 4 = 0x4
	XXStruct_kUSYWB *_clientAuditToken;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) XXStruct_kUSYWB *clientAuditToken;	// G=0x36f16261; @synthesize=_clientAuditToken
@property(readonly, assign, nonatomic) int clientPID;	// G=0x36f16251; @synthesize=_clientPID
+ (id)_center;	// 0x36f15c2d
- (id)init;	// 0x36f15be9
- (id)_forwardMessage:(id)message userInfo:(id)info auditToken:(XXStruct_kUSYWB *)token;	// 0x36f15f29
- (void)_registerNotificationsForSelectors;	// 0x36f15df1
// declared property getter: - (XXStruct_kUSYWB *)clientAuditToken;	// 0x36f16261
// declared property getter: - (int)clientPID;	// 0x36f16251
@end
