/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSArray;

@interface SAUIAddViews : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *dialogPhase;	// G=0x3559c12d; S=0x3559c149; 
@property(assign, nonatomic) BOOL scrollToTop;	// G=0x3559c199; S=0x3559c211; 
@property(assign, nonatomic) BOOL temporary;	// G=0x3559c255; S=0x3559c2cd; 
@property(copy, nonatomic) NSArray *views;	// G=0x3559c311; S=0x3559c38d; 
+ (id)addViews;	// 0x3559c09d
+ (id)addViewsWithDictionary:(id)dictionary context:(id)context;	// 0x3559c0e1
// declared property getter: - (id)dialogPhase;	// 0x3559c12d
- (id)encodedClassName;	// 0x3559c091
- (id)groupIdentifier;	// 0x3559c081
- (BOOL)requiresResponse;	// 0x3559c3f5
// declared property getter: - (BOOL)scrollToTop;	// 0x3559c199
// declared property setter: - (void)setDialogPhase:(id)phase;	// 0x3559c149
// declared property setter: - (void)setScrollToTop:(BOOL)top;	// 0x3559c211
// declared property setter: - (void)setTemporary:(BOOL)temporary;	// 0x3559c2cd
// declared property setter: - (void)setViews:(id)views;	// 0x3559c38d
// declared property getter: - (BOOL)temporary;	// 0x3559c255
// declared property getter: - (id)views;	// 0x3559c311
@end

