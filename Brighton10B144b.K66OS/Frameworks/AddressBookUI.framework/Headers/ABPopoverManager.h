/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "UIActionSheetDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "AddressBookUI-Structs.h"
#import <NSObject.h> // Unknown library

@class UIBarButtonItem, UIResponder, UIActionSheet, UIView, UIWindow, UIPopoverController;
@protocol ABPopoverRepresentDelegate;

@interface ABPopoverManager : NSObject <UIPopoverControllerDelegate, UIActionSheetDelegate> {
	UIView *_autorotateView;	// 4 = 0x4
	UIResponder *_autorotateResponder;	// 8 = 0x8
	UIBarButtonItem *_autorotateBarButtonItem;	// 12 = 0xc
	unsigned _autorotateDirections;	// 16 = 0x10
	UIPopoverController *_autorotatePopoverController;	// 20 = 0x14
	UIActionSheet *_autorotateActionSheet;	// 24 = 0x18
	id<ABPopoverRepresentDelegate> _representDelegate;	// 28 = 0x1c
	id _realDelegate;	// 32 = 0x20
	BOOL _rotating;	// 36 = 0x24
}
@property(retain, nonatomic) UIActionSheet *autorotateActionSheet;	// G=0x3094e53d; S=0x3094e54d; @synthesize=_autorotateActionSheet
@property(retain, nonatomic) UIBarButtonItem *autorotateBarButtonItem;	// G=0x3094e4dd; S=0x3094e4ed; @synthesize=_autorotateBarButtonItem
@property(assign, nonatomic) unsigned autorotateDirrections;	// G=0x3094e4fd; S=0x3094e50d; @synthesize=_autorotateDirections
@property(retain, nonatomic) UIPopoverController *autorotatePopoverController;	// G=0x3094e51d; S=0x3094e52d; @synthesize=_autorotatePopoverController
@property(retain, nonatomic) UIResponder *autorotateResponder;	// G=0x3094e4bd; S=0x3094e4cd; @synthesize=_autorotateResponder
@property(retain, nonatomic) UIView *autorotateView;	// G=0x3094e49d; S=0x3094e4ad; @synthesize=_autorotateView
@property(readonly, assign, nonatomic) UIWindow *observedWindow;	// G=0x3094d6e9; 
@property(retain, nonatomic) id realDelegate;	// G=0x3094e55d; S=0x3094e56d; @synthesize=_realDelegate
@property(retain, nonatomic) id<ABPopoverRepresentDelegate> representDelegate;	// G=0x3094e57d; S=0x3094e58d; @synthesize=_representDelegate
+ (void)actionSheet:(id)sheet dismissWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;	// 0x3094e17d
+ (void)actionSheet:(id)sheet showFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;	// 0x3094df1d
+ (void)actionSheet:(id)sheet showFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated autorotate:(BOOL)autorotate;	// 0x3094e0e5
+ (void)actionSheet:(id)sheet showFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x3094dedd
+ (void)actionSheet:(id)sheet showFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated direction:(unsigned)direction autorotate:(BOOL)autorotate;	// 0x3094df95
+ (void)actionSheet:(id)sheet showFromRect:(CGRect)rect inView:(id)view direction:(unsigned)direction animated:(BOOL)animated;	// 0x3094de45
+ (void)actionSheet:(id)sheet showFromView:(id)view animated:(BOOL)animated autorotate:(BOOL)autorotate;	// 0x3094e0b5
+ (void)actionSheet:(id)sheet showFromView:(id)view animated:(BOOL)animated direction:(unsigned)direction autorotate:(BOOL)autorotate;	// 0x3094e041
+ (void)dismissPopoverForActionSheet:(id)actionSheet;	// 0x3094e20d
+ (id)managerForPresenter:(id)presenter;	// 0x3094cf51
+ (void)popoverController:(id)controller dismissPopoverAnimated:(BOOL)animated;	// 0x30909b81
+ (void)popoverController:(id)controller presentPopoverFromRect:(CGRect)rect inView:(id)view permittedArrowDirections:(unsigned)directions animated:(BOOL)animated;	// 0x3094e2c9
+ (void)popoverController:(id)controller presentPopoverFromView:(id)view permittedArrowDirections:(unsigned)directions animated:(BOOL)animated representDelegate:(id)delegate;	// 0x3094e359
+ (void)removeManagerForPresenter:(id)presenter;	// 0x3094d049
+ (BOOL)resignFirstResponderIfNeeded;	// 0x3094ddd9
+ (void)stopAutorotatePresenter:(id)presenter;	// 0x3094e425
- (id)init;	// 0x3094d0a9
- (void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;	// 0x3094dd21
// declared property getter: - (id)autorotateActionSheet;	// 0x3094e53d
// declared property getter: - (id)autorotateBarButtonItem;	// 0x3094e4dd
// declared property getter: - (unsigned)autorotateDirrections;	// 0x3094e4fd
// declared property getter: - (id)autorotatePopoverController;	// 0x3094e51d
// declared property getter: - (id)autorotateResponder;	// 0x3094e4bd
// declared property getter: - (id)autorotateView;	// 0x3094e49d
- (BOOL)autorotates;	// 0x3094d761
- (void)dealloc;	// 0x3094d171
- (id)delegateOwner;	// 0x3094d739
- (void)forwardInvocation:(id)invocation;	// 0x3094dc19
- (void)keyboardDidHide:(id)keyboard;	// 0x3094d309
- (void)keyboardDidShow:(id)keyboard;	// 0x3094d265
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3094dbcd
// declared property getter: - (id)observedWindow;	// 0x3094d6e9
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x3094dc6d
// declared property getter: - (id)realDelegate;	// 0x3094e55d
// declared property getter: - (id)representDelegate;	// 0x3094e57d
- (BOOL)respondsToSelector:(SEL)selector;	// 0x3094db7d
- (void)revertDelegate;	// 0x3094d8a5
// declared property setter: - (void)setAutorotateActionSheet:(id)sheet;	// 0x3094e54d
// declared property setter: - (void)setAutorotateBarButtonItem:(id)item;	// 0x3094e4ed
// declared property setter: - (void)setAutorotateDirrections:(unsigned)dirrections;	// 0x3094e50d
// declared property setter: - (void)setAutorotatePopoverController:(id)controller;	// 0x3094e52d
// declared property setter: - (void)setAutorotateResponder:(id)responder;	// 0x3094e4cd
// declared property setter: - (void)setAutorotateView:(id)view;	// 0x3094e4ad
// declared property setter: - (void)setRealDelegate:(id)delegate;	// 0x3094e56d
// declared property setter: - (void)setRepresentDelegate:(id)delegate;	// 0x3094e58d
- (void)startAutorotateActionSheet:(id)sheet fromBarButtonItem:(id)barButtonItem;	// 0x3094da91
- (void)startAutorotateActionSheet:(id)sheet fromView:(id)view;	// 0x3094d9bd
- (void)startAutorotatePopoverController:(id)controller showFromView:(id)view permittedArrowDirections:(unsigned)directions representDelegate:(id)delegate;	// 0x3094d79d
- (void)startObservingRotationOfWindow:(id)window;	// 0x3094d5fd
- (void)stopAutorotate;	// 0x3094d8fd
- (void)stopObservingRotation;	// 0x3094d695
- (void)windowDidRotate:(id)window;	// 0x3094d46d
- (void)windowWillRotate:(id)window;	// 0x3094d3ad
@end
