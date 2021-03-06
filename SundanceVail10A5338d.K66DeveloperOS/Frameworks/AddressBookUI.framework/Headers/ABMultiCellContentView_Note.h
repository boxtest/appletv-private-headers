/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABMultiCellContentView.h"
#import "AddressBookUI-Structs.h"
#import "ABSwellTextViewDelegate.h"

@class ABSwellTextView;

@interface ABMultiCellContentView_Note : ABMultiCellContentView <ABSwellTextViewDelegate> {
	ABSwellTextView *_textView;	// 180 = 0xb4
}
+ (id)labelTextForPropertyGroup:(id)propertyGroup info:(id)info styleProvider:(id)provider;	// 0x370c5cb1
+ (CGSize)layoutSubviewsForView:(id)view usingSize:(CGSize)size propertyGroup:(id)group info:(id)info styleProvider:(id)provider whenEditing:(BOOL)editing;	// 0x370c5cc5
+ (void)setupTextView:(id)view withStyleProvider:(id)styleProvider whenEditing:(BOOL)editing;	// 0x370c5a15
+ (id)swellTextViewForReuse;	// 0x370c59b9
- (BOOL)canBeginEditingAnytime;	// 0x370c68f9
- (void)dealloc;	// 0x370c6279
- (CGRect)focusRectForView:(id)view;	// 0x370c6789
- (CGRect)frameForLabel;	// 0x370c5a99
- (void)reload;	// 0x370c62c9
- (void)reloadFromModel;	// 0x370c65d5
- (void)setAbCellStyle:(int)style;	// 0x370c6a01
- (void)setLabelText:(id)text;	// 0x370c6569
- (BOOL)shouldUseTwoLineLabels;	// 0x370c5a71
- (void)swellTextView:(id)view didChangeSize:(CGSize)size;	// 0x370c6989
- (void)swellTextViewDidBeginEditing:(id)swellTextView;	// 0x370c6979
- (void)swellTextViewDidEndEditing:(id)swellTextView;	// 0x370c6969
- (BOOL)swellTextViewShouldBeginEditing:(id)swellTextView;	// 0x370c6939
- (BOOL)swellTextViewShouldEndEditing:(id)swellTextView;	// 0x370c6951
- (void)swellTextViewTextDidChange:(id)swellTextViewText;	// 0x370c68fd
- (BOOL)tabToNextResponder:(BOOL)nextResponder fromView:(id)view;	// 0x370c68a5
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x370c6509
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x370c6539
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x370c64bd
- (void)updateSubviewsForNewStateAnimated:(BOOL)newStateAnimated;	// 0x370c6695
- (id)viewForFirstResponder;	// 0x370c68e9
@end

