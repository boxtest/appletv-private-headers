/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class NSString, UIWindow, UIWebView, UIView;

@interface UIReferenceLibraryViewController : UIViewController {
@private
	int _oldPopoverStyle;	// 156 = 0x9c
	unsigned _definitionLanguageDirection;	// 160 = 0xa0
	NSString *_stringToDefine;	// 164 = 0xa4
	UIWebView *_definitionView;	// 168 = 0xa8
	UIView *_definitionContainerView;	// 172 = 0xac
	UIView *_modalHeaderView;	// 176 = 0xb0
	NSString *_stylesheet;	// 180 = 0xb4
	NSString *_definitionHTML;	// 184 = 0xb8
	id _dismissCompletionHandler;	// 188 = 0xbc
	UIWindow *_rotationDecider;	// 192 = 0xc0
}
@property(retain, nonatomic, setter=_setRotationDecider:) UIWindow *_rotationDecider;	// G=0x303aeca9; S=0x303aecb9; @synthesize
@property(readonly, assign, nonatomic) UIView *definitionContainerView;	// G=0x303ae1b1; @synthesize=_definitionContainerView
@property(retain, nonatomic) NSString *definitionHTML;	// G=0x303aec41; S=0x303aec51; @synthesize=_definitionHTML
@property(readonly, assign, nonatomic) UIWebView *definitionView;	// G=0x303aec21; @synthesize=_definitionView
@property(copy, nonatomic) id dismissCompletionHandler;	// G=0x303aec75; S=0x303aec85; @synthesize=_dismissCompletionHandler
@property(readonly, assign, nonatomic) UIView *modalHeaderView;	// G=0x303ada5d; @synthesize=_modalHeaderView
@property(readonly, assign, nonatomic) NSString *stringToDefine;	// G=0x303aec11; @synthesize=_stringToDefine
@property(readonly, assign, nonatomic) NSString *stylesheet;	// G=0x303aec31; @synthesize=_stylesheet
+ (id)_backgroundColor;	// 0x303ad885
+ (id)_diddlydoLineColor;	// 0x303ad85d
+ (id)_foregroundColor;	// 0x303ad8cd
+ (id)_noDefinitionLabel;	// 0x303ad915
+ (id)_popoverControllerForReferenceLibraryWithString:(id)string;	// 0x303ad77d
+ (id)_viewControllerForReferenceWithString:(id)string options:(unsigned)options;	// 0x303ad815
+ (BOOL)dictionaryHasDefinitionForTerm:(id)term;	// 0x303ad2b9
+ (void)initialize;	// 0x30104c39
- (id)initWithTerm:(id)term;	// 0x303ad321
- (void)_didResignContentViewControllerOfPopover:(id)popover;	// 0x303aeb45
- (void)_dismissModalReferenceView:(id)view;	// 0x303ae141
- (void)_repositionSubviews;	// 0x303ae6d5
// declared property getter: - (id)_rotationDecider;	// 0x303aeca9
- (void)_setPopoverController:(id)controller;	// 0x303ae9e1
// declared property setter: - (void)_setRotationDecider:(id)decider;	// 0x303aecb9
- (void)_willBecomeContentViewControllerOfPopover:(id)popover;	// 0x303aeab5
- (void)dealloc;	// 0x303ad6cd
// declared property getter: - (id)definitionContainerView;	// 0x303ae1b1
// declared property getter: - (id)definitionHTML;	// 0x303aec41
- (void)definitionService:(id)service hasNewHTML:(id)html;	// 0x303ae675
// declared property getter: - (id)definitionView;	// 0x303aec21
// declared property getter: - (id)dismissCompletionHandler;	// 0x303aec75
// declared property getter: - (id)modalHeaderView;	// 0x303ada5d
// declared property setter: - (void)setDefinitionHTML:(id)html;	// 0x303aec51
// declared property setter: - (void)setDismissCompletionHandler:(id)handler;	// 0x303aec85
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x303aebc1
// declared property getter: - (id)stringToDefine;	// 0x303aec11
// declared property getter: - (id)stylesheet;	// 0x303aec31
- (void)viewDidAppear:(BOOL)view;	// 0x303aea21
- (void)viewDidLayoutSubviews;	// 0x303aea59
- (void)viewDidLoad;	// 0x303ae6c5
@end

