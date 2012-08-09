/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class PKPrinter, UIPrintPanelTableViewController, UIViewController, UIPopoverController, UINavigationController, UIPrintInteractionController, UIPrintPaper, UIWindow, NSArray;

__attribute__((visibility("hidden")))
@interface UIPrintPanelViewController : NSObject {
	UIPrintInteractionController *_printInteractionController;	// 4 = 0x4
	UINavigationController *_navigationController;	// 8 = 0x8
	UIPrintPanelTableViewController *_tableViewController;	// 12 = 0xc
	UIViewController *_parentController;	// 16 = 0x10
	UIPopoverController *_poverController;	// 20 = 0x14
	UIWindow *_window;	// 24 = 0x18
	PKPrinter *_printer;	// 28 = 0x1c
	BOOL _dismissed;	// 32 = 0x20
	BOOL _animated;	// 33 = 0x21
	BOOL _observingRotation;	// 34 = 0x22
	BOOL _parentHasNoPopover;	// 35 = 0x23
}
@property(assign, nonatomic) int copies;	// G=0x3058059d; S=0x30580645; 
@property(assign, nonatomic) BOOL duplex;	// G=0x305804d5; S=0x30580511; 
@property(readonly, assign, nonatomic) int pageCount;	// G=0x305805d5; 
@property(assign, nonatomic) NSRange pageRange;	// G=0x305805f5; S=0x30580625; 
@property(retain, nonatomic) UIPrintPaper *paper;	// G=0x3058078d; S=0x305807ad; 
@property(readonly, assign, nonatomic) NSArray *paperList;	// G=0x30580681; 
@property(retain, nonatomic) PKPrinter *printer;	// G=0x305808dd; S=0x3058028d; @synthesize=_printer
@property(readonly, assign, nonatomic) BOOL showDuplex;	// G=0x305807cd; 
@property(readonly, assign, nonatomic) BOOL showPageRange;	// G=0x30580839; 
@property(readonly, assign, nonatomic) BOOL showPaper;	// G=0x3058085d; 
- (id)initWithPrintInterationController:(id)printInterationController inParentController:(id)parentController;	// 0x3057ebd5
- (void)_keyWindowWillRotate:(id)_keyWindow;	// 0x3057f365
- (void)_presentInParentAnimated:(BOOL)parentAnimated;	// 0x3057ef8d
- (void)_presentWindow;	// 0x3057f0b1
- (void)cancelPrinting;	// 0x30580071
- (void)controllerDidDisappear;	// 0x30580085
// declared property getter: - (int)copies;	// 0x3058059d
- (void)dealloc;	// 0x3057ee79
- (void)dismissAnimated:(BOOL)animated;	// 0x3057fc61
- (void)dismissPrintPanel:(BOOL)panel animated:(BOOL)animated;	// 0x3057f871
// declared property getter: - (BOOL)duplex;	// 0x305804d5
// declared property getter: - (int)pageCount;	// 0x305805d5
// declared property getter: - (NSRange)pageRange;	// 0x305805f5
// declared property getter: - (id)paper;	// 0x3058078d
// declared property getter: - (id)paperList;	// 0x30580681
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x3057ffe9
- (void)presentPrintPanelAnimated:(BOOL)animated;	// 0x3057f3f9
- (void)presentPrintPanelFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;	// 0x3057f745
- (void)presentPrintPanelFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x3057f5f9
// declared property getter: - (id)printer;	// 0x305808dd
// declared property setter: - (void)setCopies:(int)copies;	// 0x30580645
// declared property setter: - (void)setDuplex:(BOOL)duplex;	// 0x30580511
// declared property setter: - (void)setPageRange:(NSRange)range;	// 0x30580625
// declared property setter: - (void)setPaper:(id)paper;	// 0x305807ad
// declared property setter: - (void)setPrinter:(id)printer;	// 0x3058028d
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x3057fc75
// declared property getter: - (BOOL)showDuplex;	// 0x305807cd
// declared property getter: - (BOOL)showPageRange;	// 0x30580839
// declared property getter: - (BOOL)showPaper;	// 0x3058085d
- (void)startPrinting;	// 0x3057fffd
- (unsigned)supportedInterfaceOrientations;	// 0x3057fe39
@end
