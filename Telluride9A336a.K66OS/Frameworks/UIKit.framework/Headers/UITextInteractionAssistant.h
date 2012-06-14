/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "UIGestureRecognizerDelegate.h"

@class UITextChecker, NSMutableArray, UIFieldEditor, UITapGestureRecognizer, UIView, UILongPressGestureRecognizer, NSMutableSet;
@protocol UITextSelectingContainer;

__attribute__((visibility("hidden")))
@interface UITextInteractionAssistant : NSObject <UIGestureRecognizerDelegate> {
@private
	UIView<UITextSelectingContainer> *_view;	// 4 = 0x4
	NSMutableArray *_recognizers;	// 8 = 0x8
	NSMutableSet *_linkGestures;	// 12 = 0xc
	UILongPressGestureRecognizer *_loupeGesture;	// 16 = 0x10
	UITapGestureRecognizer *_singleTapGesture;	// 20 = 0x14
	int _autoscrollRamp;	// 24 = 0x18
	float _autoscrollFactor;	// 28 = 0x1c
	CGPoint _autoscrollBasePoint;	// 32 = 0x20
	CGPoint _autoscrollUntransformedExtentPoint;	// 40 = 0x28
	CGPoint _loupeGestureEndPoint;	// 48 = 0x30
	UITextChecker *_textChecker;	// 56 = 0x38
	BOOL _inGesture;	// 60 = 0x3c
	BOOL _autoscrolled;	// 61 = 0x3d
	BOOL _isTryingToHighlightLink;	// 62 = 0x3e
}
@property(assign, nonatomic) CGPoint autoscrollUntransformedExtentPoint;	// G=0x35378389; S=0x353783a5; @synthesize=_autoscrollUntransformedExtentPoint
@property(assign, nonatomic) BOOL autoscrolled;	// G=0x353783b9; S=0x353783c9; @synthesize=_autoscrolled
@property(readonly, assign, nonatomic) UIFieldEditor *fieldEditor;	// G=0x351d2e09; 
@property(assign, nonatomic) BOOL inGesture;	// G=0x35100619; S=0x35378379; @synthesize=_inGesture
@property(retain, nonatomic) UILongPressGestureRecognizer *loupeGesture;	// G=0x351007c5; S=0x351007d5; @synthesize=_loupeGesture
@property(readonly, assign, nonatomic) UIView *scrollView;	// G=0x35374875; 
@property(retain, nonatomic) UITapGestureRecognizer *singleTapGesture;	// G=0x351b6171; S=0x351007f9; @synthesize=_singleTapGesture
@property(readonly, assign, nonatomic) UIView<UITextSelectingContainer> *view;	// G=0x35100a71; @synthesize=_view
- (id)initWithView:(id)view;	// 0x35100151
- (id)addHighlightLinkRecognizer;	// 0x35251f4d
- (id)addLoupeGestureRecognizer:(BOOL)recognizer;	// 0x35101715
- (id)addOneFingerDoubleTapRecognizer;	// 0x35100f49
- (id)addOneFingerDoubleTapRecognizer:(SEL)recognizer;	// 0x35100f65
- (id)addOneFingerTapRecognizer;	// 0x351015d9
- (id)addOneFingerTapRecognizer:(SEL)recognizer;	// 0x351015f5
- (id)addOneFingerTripleTapRecognizer;	// 0x35100ae5
- (id)addPhraseBoundaryGestureRecognizer;	// 0x353749f9
- (id)addSelectionTapRecognizer;	// 0x353749dd
- (id)addSelectionTapRecognizer:(SEL)recognizer;	// 0x353748b9
- (id)addTapAndAHalfRecognizer;	// 0x35101161
- (id)addTapAndHoldOnLinkRecognizer;	// 0x35252079
- (id)addTwoFingerRangedSelectRecognizer;	// 0x35101311
- (id)addTwoFingerSingleTapRecognizer;	// 0x35101079
- (void)attach;	// 0x3524d7dd
// declared property getter: - (CGPoint)autoscrollUntransformedExtentPoint;	// 0x35378389
- (void)autoscrollWillNotStart;	// 0x35376595
// declared property getter: - (BOOL)autoscrolled;	// 0x353783b9
- (void)cancelAutoscroll;	// 0x35376509
- (void)cancelInteractionWithLink;	// 0x351b7c49
- (void)clearGestureRecognizers;	// 0x35100629
- (void)clearGestureRecognizers:(BOOL)recognizers;	// 0x3510063d
- (void)clearSelection;	// 0x35375f79
- (void)confirmMarkedText:(id)text;	// 0x35374fc9
- (CGPoint)constrainedPoint:(CGPoint)point;	// 0x35376389
- (BOOL)containerIsAtom;	// 0x351009b5
- (BOOL)containerIsPlainStyleAtom;	// 0x351b7ee9
- (BOOL)containerIsTextField;	// 0x351d2d4d
- (void)dealloc;	// 0x351e70f1
- (void)detach;	// 0x35216555
- (void)detach:(BOOL)detach;	// 0x351e7179
- (float)distanceBetweenPoint:(CGPoint)point andRange:(id)range;	// 0x351b8d75
- (void)doubleTapInUneditable:(id)uneditable;	// 0x35375449
// declared property getter: - (id)fieldEditor;	// 0x351d2e09
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x351b280d
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x351b6cf9
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x351b5f09
// declared property getter: - (BOOL)inGesture;	// 0x35100619
- (BOOL)isChineseInputEnabled;	// 0x35377425
- (BOOL)isInteractingWithLink;	// 0x353771a5
- (void)longDelayRecognizer:(id)recognizer;	// 0x35376fdd
// declared property getter: - (id)loupeGesture;	// 0x351007c5
- (void)loupeGesture:(id)gesture;	// 0x35374aa1
- (void)notifyKeyboardSelectionChanged;	// 0x35233221
- (void)oneFingerDoubleTap:(id)tap;	// 0x353758d5
- (void)oneFingerTap:(id)tap;	// 0x351b6ff9
- (void)oneFingerTapInUneditable:(id)uneditable;	// 0x35375631
- (void)oneFingerTapSelectsAll:(id)all;	// 0x35232db1
- (void)oneFingerTripleTap:(id)tap;	// 0x35375a39
- (id)rangeForTextReplacement:(id)textReplacement;	// 0x351b8589
- (void)resignedFirstResponder;	// 0x353763c5
- (void)scheduleDictationReplacementsForAlternatives:(id)alternatives range:(id)range;	// 0x353774f9
- (void)scheduleReplacementsForRange:(id)range withOptions:(unsigned)options;	// 0x351d3079
- (void)scheduleReplacementsWithOptions:(unsigned)options;	// 0x353773c1
// declared property getter: - (id)scrollView;	// 0x35374875
- (void)selectAll;	// 0x35375ec1
- (void)selectWord;	// 0x35375bb1
- (void)selectWordWithoutShowingCommands;	// 0x35375d4d
// declared property setter: - (void)setAutoscrollUntransformedExtentPoint:(CGPoint)point;	// 0x353783a5
// declared property setter: - (void)setAutoscrolled:(BOOL)autoscrolled;	// 0x353783c9
- (void)setFirstResponderIfNecessary;	// 0x351b7cc9
- (void)setGestureRecognizers;	// 0x35100209
// declared property setter: - (void)setInGesture:(BOOL)gesture;	// 0x35378379
// declared property setter: - (void)setLoupeGesture:(id)gesture;	// 0x351007d5
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x351b81f9
// declared property setter: - (void)setSingleTapGesture:(id)gesture;	// 0x351007f9
- (BOOL)shouldHandleFormGestureAtLocation:(CGPoint)location;	// 0x351b60d1
- (BOOL)shouldHandleOneFingerTapInUneditable:(id)uneditable;	// 0x35375581
- (BOOL)shouldIgnoreLinkGestures;	// 0x353770bd
// declared property getter: - (id)singleTapGesture;	// 0x351b6171
- (void)smallDelayRecognizer:(id)recognizer;	// 0x35376d31
- (void)startAutoscroll:(CGPoint)autoscroll;	// 0x353763fd
- (BOOL)swallowsDoubleTapWithScale:(float)scale atPoint:(CGPoint)point;	// 0x35378251
- (void)tapAndAHalf:(id)half;	// 0x35374ffd
- (BOOL)tapOnLinkWithGesture:(id)gesture;	// 0x35377209
- (void)turnOffDrawsAsAtomIfPlainStyleAtom;	// 0x351b7dfd
- (void)twoFingerRangedSelectGesture:(id)gesture;	// 0x3537617d
- (void)twoFingerSingleTap:(id)tap;	// 0x35376049
- (void)updateAutoscroll:(id)autoscroll;	// 0x35376601
- (BOOL)useGesturesForEditableContent;	// 0x351008d9
// declared property getter: - (id)view;	// 0x35100a71
- (BOOL)viewCouldBecomeEditable:(id)editable;	// 0x35100821
@end
