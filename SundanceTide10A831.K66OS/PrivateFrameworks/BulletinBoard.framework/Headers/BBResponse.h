/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class BBAssertion, NSString, NSArray;

@interface BBResponse : NSObject <NSCoding> {
	BBAssertion *_lifeAssertion;	// 4 = 0x4
	id _sendBlock;	// 8 = 0x8
	NSString *_bulletinID;	// 12 = 0xc
	BOOL _deliverToPublisher;	// 16 = 0x10
	NSString *_actionKey;	// 20 = 0x14
	BOOL _sent;	// 24 = 0x18
	NSString *_replyText;	// 28 = 0x1c
	NSArray *_lifeAssertions;	// 32 = 0x20
}
@property(retain, nonatomic) NSString *actionKey;	// G=0x33ca37b1; S=0x33ca37c1; @synthesize=_actionKey
@property(retain, nonatomic) NSString *bulletinID;	// G=0x33ca3771; S=0x33ca3781; @synthesize=_bulletinID
@property(assign, nonatomic) BOOL deliverToPublisher;	// G=0x33ca3791; S=0x33ca37a1; @synthesize=_deliverToPublisher
@property(copy, nonatomic) NSArray *lifeAssertions;	// G=0x33ca3729; S=0x33ca373d; @synthesize=_lifeAssertions
@property(copy, nonatomic) NSString *replyText;	// G=0x33ca37d1; S=0x33ca37e5; @synthesize=_replyText
@property(copy, nonatomic) id sendBlock;	// G=0x33ca374d; S=0x33ca3761; @synthesize=_sendBlock
- (id)initWithCoder:(id)coder;	// 0x33ca3589
// declared property getter: - (id)actionKey;	// 0x33ca37b1
// declared property getter: - (id)bulletinID;	// 0x33ca3771
- (void)dealloc;	// 0x33ca3499
// declared property getter: - (BOOL)deliverToPublisher;	// 0x33ca3791
- (void)encodeWithCoder:(id)coder;	// 0x33ca366d
// declared property getter: - (id)lifeAssertions;	// 0x33ca3729
// declared property getter: - (id)replyText;	// 0x33ca37d1
- (void)send;	// 0x33ca354d
// declared property getter: - (id)sendBlock;	// 0x33ca374d
// declared property setter: - (void)setActionKey:(id)key;	// 0x33ca37c1
// declared property setter: - (void)setBulletinID:(id)anId;	// 0x33ca3781
// declared property setter: - (void)setDeliverToPublisher:(BOOL)publisher;	// 0x33ca37a1
// declared property setter: - (void)setLifeAssertions:(id)assertions;	// 0x33ca373d
// declared property setter: - (void)setReplyText:(id)text;	// 0x33ca37e5
// declared property setter: - (void)setSendBlock:(id)block;	// 0x33ca3761
@end

