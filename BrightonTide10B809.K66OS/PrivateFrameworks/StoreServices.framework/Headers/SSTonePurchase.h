/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSPurchase.h"
#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSNumber, NSArray, NSString;

@interface SSTonePurchase : SSPurchase <SSXPCCoding, NSCoding, NSCopying> {
	NSArray *_allowedToneStyles;	// 64 = 0x40
	NSNumber *_assigneeIdentifier;	// 68 = 0x44
	NSString *_assigneeToneStyle;	// 72 = 0x48
	BOOL _shouldMakeDefaultRingtone;	// 76 = 0x4c
	BOOL _shouldMakeDefaultTextTone;	// 77 = 0x4d
}
@property(copy) NSArray *allowedToneStyles;	// G=0x354c2049; S=0x354c2559; 
@property(retain) NSNumber *assigneeIdentifier;	// G=0x354c21f9; S=0x354c2639; 
@property(copy) NSString *assigneeToneStyle;	// G=0x354c23a9; S=0x354c2719; 
@property(assign) BOOL shouldMakeDefaultRingtone;	// G=0x354c28f9; S=0x354c27f9; 
@property(assign) BOOL shouldMakeDefaultTextTone;	// G=0x354c29c9; S=0x354c2879; 
- (id)initWithCoder:(id)coder;	// 0x354c2a99
- (id)initWithItem:(id)item offer:(id)offer;	// 0x354c1f69
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x354c3135
// declared property getter: - (id)allowedToneStyles;	// 0x354c2049
// declared property getter: - (id)assigneeIdentifier;	// 0x354c21f9
// declared property getter: - (id)assigneeToneStyle;	// 0x354c23a9
- (id)copyWithZone:(NSZone *)zone;	// 0x354c2e51
- (id)copyXPCEncoding;	// 0x354c2fc1
- (void)dealloc;	// 0x354c1fd1
- (void)encodeWithCoder:(id)coder;	// 0x354c2c39
// declared property setter: - (void)setAllowedToneStyles:(id)styles;	// 0x354c2559
// declared property setter: - (void)setAssigneeIdentifier:(id)identifier;	// 0x354c2639
// declared property setter: - (void)setAssigneeToneStyle:(id)style;	// 0x354c2719
// declared property setter: - (void)setShouldMakeDefaultRingtone:(BOOL)makeDefaultRingtone;	// 0x354c27f9
// declared property setter: - (void)setShouldMakeDefaultTextTone:(BOOL)makeDefaultTextTone;	// 0x354c2879
// declared property getter: - (BOOL)shouldMakeDefaultRingtone;	// 0x354c28f9
// declared property getter: - (BOOL)shouldMakeDefaultTextTone;	// 0x354c29c9
@end

