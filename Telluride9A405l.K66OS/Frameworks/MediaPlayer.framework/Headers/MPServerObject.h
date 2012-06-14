/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library


@interface MPServerObject : NSObject {
@private
	int _clientPID;	// 4 = 0x4
	XXStruct_kUSYWB *_clientAuditToken;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) XXStruct_kUSYWB *clientAuditToken;	// G=0x33c09479; @synthesize=_clientAuditToken
@property(readonly, assign, nonatomic) int clientPID;	// G=0x33c09469; @synthesize=_clientPID
+ (id)_center;	// 0x33c08e3d
- (id)init;	// 0x33c08df9
- (id)_forwardMessage:(id)message userInfo:(id)info auditToken:(XXStruct_kUSYWB *)token;	// 0x33c0915d
- (void)_registerNotificationsForSelectors;	// 0x33c09011
// declared property getter: - (XXStruct_kUSYWB *)clientAuditToken;	// 0x33c09479
// declared property getter: - (int)clientPID;	// 0x33c09469
@end
