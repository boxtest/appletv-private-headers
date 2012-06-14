/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"
#import "BRContainerViewCell.h"

@class BRDividerControl;

@interface BRBoxControl : BRControl <BRContainerViewCell> {
@private
	BRControl *_content;	// 48 = 0x30
	BRDividerControl *_divider;	// 52 = 0x34
	float _dividerMargin;	// 56 = 0x38
	XXStruct_qlg9jA _dividerSuggestedHeight;	// 60 = 0x3c
	XXStruct_qlg9jA _space;	// 64 = 0x40
	id _loadCompletionBlock;	// 68 = 0x44
	XXStruct_40SSZC _contentSize;	// 72 = 0x48
}
@property(retain) BRControl *content;	// G=0x3667ed65; S=0x3667ed75; converted property
@property(assign, nonatomic) XXStruct_40SSZC contentSize;	// G=0x3667f2ed; S=0x3667f309; @synthesize=_contentSize
@property(retain) BRDividerControl *divider;	// G=0x3667ebed; S=0x3667ec45; converted property
@property(assign) float dividerMargin;	// G=0x3667ed55; S=0x3667ecf1; converted property
@property(assign) XXStruct_qlg9jA dividerSuggestedHeight;	// G=0x3667ecd5; S=0x3667ecc5; converted property
- (id)accessibilityLabel;	// 0x3667f045
- (void)cancelContainerViewLoad;	// 0x3667f185
// converted property getter: - (id)content;	// 0x3667ed65
// declared property getter: - (XXStruct_40SSZC)contentSize;	// 0x3667f2ed
- (void)controlWasDeactivated;	// 0x3667eaa9
- (void)dealloc;	// 0x3667ea35
- (id)description;	// 0x3667eb71
// converted property getter: - (id)divider;	// 0x3667ebed
// converted property getter: - (float)dividerMargin;	// 0x3667ed55
// converted property getter: - (XXStruct_qlg9jA)dividerSuggestedHeight;	// 0x3667ecd5
- (void)layoutSubcontrols;	// 0x3667ee1d
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x3667f065
// converted property setter: - (void)setContent:(id)content;	// 0x3667ed75
// declared property setter: - (void)setContentSize:(XXStruct_40SSZC)size;	// 0x3667f309
// converted property setter: - (void)setDivider:(id)divider;	// 0x3667ec45
// converted property setter: - (void)setDividerMargin:(float)margin;	// 0x3667ecf1
// converted property setter: - (void)setDividerSuggestedHeight:(XXStruct_qlg9jA)height;	// 0x3667ecc5
- (void)setIdentifier:(id)identifier;	// 0x3667ebfd
- (void)setIgnoreLoadAndDisplayOnDemand;	// 0x3667f249
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(BOOL)animations;	// 0x3667f299
- (void)setReadyToDisplay;	// 0x3667f1f9
- (void)setSpace:(XXStruct_qlg9jA)space;	// 0x3667ee0d
- (void)windowMaxBoundsChanged;	// 0x3667eb1d
@end
