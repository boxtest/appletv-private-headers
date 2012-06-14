/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

#import <NSObject.h> // Unknown library
#import "CoreMIDI-Structs.h"

@class NSString;

@interface MIDINetworkSession : NSObject {
@private
	MIDINetworkSessionImpl *_impl;	// 4 = 0x4
}
@property(assign, nonatomic) unsigned connectionPolicy;	// G=0x34700579; S=0x34700429; 
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x34700bb9; S=0x347009f5; 
@property(readonly, assign, nonatomic) NSString *localName;	// G=0x34700695; 
@property(readonly, assign, nonatomic) NSString *networkName;	// G=0x347007a9; 
@property(readonly, assign, nonatomic) unsigned networkPort;	// G=0x347008d9; 
+ (id)defaultSession;	// 0x346ffc71
- (id)init;	// 0x34700d25
- (BOOL)addConnection:(id)connection;	// 0x347001bd
- (BOOL)addContact:(id)contact;	// 0x346ffec9
- (BOOL)addOrRemoveConnection:(id)connection add:(BOOL)add;	// 0x347002ad
// declared property getter: - (unsigned)connectionPolicy;	// 0x34700579
- (id)connections;	// 0x34700315
- (id)contacts;	// 0x346fffa9
- (void)contactsChanged;	// 0x346ffc2d
- (void)dealloc;	// 0x34700cd9
- (OpaqueMIDIEndpoint *)destinationEndpoint;	// 0x346ffb49
// declared property getter: - (BOOL)isEnabled;	// 0x34700bb9
// declared property getter: - (id)localName;	// 0x34700695
// declared property getter: - (id)networkName;	// 0x347007a9
// declared property getter: - (unsigned)networkPort;	// 0x347008d9
- (void)refreshBonjourName;	// 0x34700f41
- (BOOL)removeConnection:(id)connection;	// 0x347000cd
- (BOOL)removeContact:(id)contact;	// 0x346ffde5
- (void)sessionChanged;	// 0x346ffbd9
// declared property setter: - (void)setConnectionPolicy:(unsigned)policy;	// 0x34700429
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x347009f5
- (void)setStateToEntity;	// 0x34701019
- (OpaqueMIDIEndpoint *)sourceEndpoint;	// 0x346ffb35
- (void)updateFromEntity;	// 0x34701099
@end
