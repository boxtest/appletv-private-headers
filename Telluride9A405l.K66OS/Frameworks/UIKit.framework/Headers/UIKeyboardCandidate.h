/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSString;

@interface UIKeyboardCandidate : NSObject <NSCopying> {
@private
	NSString *_alternativeText;	// 4 = 0x4
	NSString *_accessibilityLabel;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSString *accessibilityLabel;	// G=0x32f69c3d; @synthesize=_accessibilityLabel
@property(copy, nonatomic) NSString *alternativeText;	// G=0x32f69dd9; S=0x32f69de9; @synthesize=_alternativeText
@property(readonly, assign, nonatomic) NSString *candidate;	// G=0x32f69c25; 
@property(readonly, assign, nonatomic) unsigned deleteCount;	// G=0x32f69c39; 
@property(readonly, assign, nonatomic, getter=isExtensionCandidate) BOOL extensionCandidate;	// G=0x32f69dd5; 
@property(readonly, assign, nonatomic) NSString *input;	// G=0x32f69c29; 
@property(readonly, assign, nonatomic) NSString *insertion;	// G=0x32dd8831; 
@property(readonly, assign, nonatomic) BOOL isForShortcutConversion;	// G=0x32dd8841; 
@property(readonly, assign, nonatomic) unsigned wordOriginFeedbackID;	// G=0x32d791f5; 
// declared property getter: - (id)accessibilityLabel;	// 0x32f69c3d
// declared property getter: - (id)alternativeText;	// 0x32f69dd9
// declared property getter: - (id)candidate;	// 0x32f69c25
- (id)copyWithZone:(NSZone *)zone;	// 0x32f69cdd
- (void)dealloc;	// 0x32f69bc5
// declared property getter: - (unsigned)deleteCount;	// 0x32f69c39
- (unsigned)hash;	// 0x32f69dad
// declared property getter: - (id)input;	// 0x32f69c29
// declared property getter: - (id)insertion;	// 0x32dd8831
- (BOOL)isEqual:(id)equal;	// 0x32f69d11
// declared property getter: - (BOOL)isExtensionCandidate;	// 0x32f69dd5
// declared property getter: - (BOOL)isForShortcutConversion;	// 0x32dd8841
// declared property setter: - (void)setAlternativeText:(id)text;	// 0x32f69de9
// declared property getter: - (unsigned)wordOriginFeedbackID;	// 0x32d791f5
@end

