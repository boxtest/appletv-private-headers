/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <NSObject.h> // Unknown library


@interface TUReplyWithMessageStore : NSObject {
}
- (id)init;	// 0x35b4e5c9
- (void)_handleMessagesStoreChanged;	// 0x35b4ef69
- (id)cannedRepliesForSending;	// 0x35b4ec3d
- (id)cannedRepliesWithCapitalization:(BOOL)capitalization;	// 0x35b4e9b5
- (id)cannedReplyActionSheetOptions;	// 0x35b4eb79
- (id)cannedReplyActionSheetPrefix;	// 0x35b4eb01
- (id)cannedReplyPrefix;	// 0x35b4e705
- (id)cannedReplyPrefixForSending;	// 0x35b4e745
- (id)cannedReplySettingsPrefix;	// 0x35b4edbd
- (int)count;	// 0x35b4e701
- (id)customReplies;	// 0x35b4e891
- (void)dealloc;	// 0x35b4e661
- (id)defaultRepliesWithCapitalization:(BOOL)capitalization;	// 0x35b4e785
- (void)setCustomReply:(id)reply atIndex:(unsigned)index;	// 0x35b4ee35
@end
