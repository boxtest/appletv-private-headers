/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface AccessibilityObjectWrapper : NSObject {
@private
	AccessibilityObject *m_object;	// 4 = 0x4
	int m_isAccessibilityElement;	// 8 = 0x8
	unsigned long long m_accessibilityTraitsFromAncestor;	// 12 = 0xc
}
- (id)initWithAccessibilityObject:(AccessibilityObject *)accessibilityObject;	// 0x331f4385
- (void)_accessibilityActivate;	// 0x333f2379
- (BOOL)_accessibilityIsLandmarkRole:(int)role;	// 0x333c3471
- (id)_accessibilityLandmarkAncestor;	// 0x333f36f1
- (id)_accessibilityListAncestor;	// 0x333ee5b1
- (id)_accessibilityNextElementsWithCount:(unsigned long)count;	// 0x333f26f9
- (id)_accessibilityParentForSubview:(id)subview;	// 0x333f2305
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)count;	// 0x333f26ad
- (id)_accessibilityTableAncestor;	// 0x333ee5f5
- (unsigned long long)_accessibilityTraitsFromAncestors;	// 0x333c315d
- (id)_accessibilityWebDocumentView;	// 0x333f2745
- (BOOL)_addAccessibilityObject:(AccessibilityObject *)object toTextMarkerArray:(id)textMarkerArray;	// 0x333f1d99
- (CGRect)_convertIntRectToScreenCoordinates:(IntRect)screenCoordinates;	// 0x333f29d9
- (PassRefPtr<WebCore::Range>)_convertToDOMRange:(NSRange)domrange;	// 0x333f08d5
- (NSRange)_convertToNSRange:(Range *)nsrange;	// 0x333f0955
- (BOOL)_prepareAccessibilityCall;	// 0x3320fd5d
- (id)_stringForRange:(NSRange)range attributed:(BOOL)attributed;	// 0x333efb39
- (BOOL)accessibilityARIAIsBusy;	// 0x333ee921
- (BOOL)accessibilityARIALiveRegionIsAtomic;	// 0x333ee84d
- (id)accessibilityARIALiveRegionStatus;	// 0x333ee8d5
- (id)accessibilityARIARelevantStatus;	// 0x333ee889
- (CGPoint)accessibilityActivationPoint;	// 0x333f28b9
- (BOOL)accessibilityCanFuzzyHitTest;	// 0x333f3c4d
- (NSRange)accessibilityColumnRange;	// 0x333f3285
- (id)accessibilityContainer;	// 0x333c6181
- (void)accessibilityDecreaseSelection:(int)selection;	// 0x333f1fd5
- (void)accessibilityDecrement;	// 0x333f1e29
- (id)accessibilityElementAtIndex:(int)index;	// 0x333c4dd1
- (int)accessibilityElementCount;	// 0x333c34cd
- (void)accessibilityElementDidBecomeFocused;	// 0x333f22cd
- (id)accessibilityElementForRow:(int)row andColumn:(int)column;	// 0x333f3355
- (CGRect)accessibilityElementRect;	// 0x333f2951
- (id)accessibilityFlowToElements;	// 0x333f24e5
- (id)accessibilityFocusedUIElement;	// 0x333f27f9
- (CGRect)accessibilityFrame;	// 0x333f2839
- (id)accessibilityHeaderElements;	// 0x333f33a5
- (id)accessibilityHint;	// 0x333f2c31
- (id)accessibilityHitTest:(CGPoint)test;	// 0x333f3a7d
- (id)accessibilityIdentifier;	// 0x333ee9f1
- (void)accessibilityIncreaseSelection:(int)selection;	// 0x333f1fe9
- (void)accessibilityIncrement;	// 0x333f1e61
- (BOOL)accessibilityIsComboBox;	// 0x333f2d61
- (id)accessibilityLabel;	// 0x333c510d
- (id)accessibilityLanguage;	// 0x333f375d
- (id)accessibilityLinkedElement;	// 0x333f23b1
- (void)accessibilityModifySelection:(int)selection increase:(BOOL)increase;	// 0x333f1ffd
- (void)accessibilityMoveSelectionToMarker:(id)marker;	// 0x333f1e99
- (AccessibilityObject *)accessibilityObject;	// 0x333c62a9
- (id)accessibilityObjectForTextMarker:(id)textMarker;	// 0x333f0225
- (id)accessibilityPlaceholderValue;	// 0x333f323d
- (id)accessibilityPostProcessHitTest:(CGPoint)test;	// 0x333ee50d
- (void)accessibilityPostedNotification:(int)notification;	// 0x3320fa35
- (BOOL)accessibilityRequired;	// 0x333f2671
- (NSRange)accessibilityRowRange;	// 0x333f32ed
- (void)accessibilitySetPostedNotificationCallback:(/*function-pointer*/ void *)callback withContext:(void *)context;	// 0x333ee5a1
- (id)accessibilitySpeechHint;	// 0x333ee95d
- (id)accessibilityTitleElement;	// 0x333f36b1
- (unsigned long long)accessibilityTraits;	// 0x3320fb51
- (id)accessibilityURL;	// 0x333f2b05
- (id)accessibilityValue;	// 0x333f2da1
- (id)arrayOfTextForTextMarkers:(id)textMarkers attributed:(BOOL)attributed;	// 0x333f0d3d
- (id)attachmentView;	// 0x333c62c5
- (id)attributedStringForRange:(NSRange)range;	// 0x333efaf1
- (BOOL)containsUnnaturallySegmentedChildren;	// 0x333c630d
- (void)dealloc;	// 0x333c7545
- (void)detach;	// 0x333aa14d
- (BOOL)determineIsAccessibilityElement;	// 0x333c2f91
- (NSRange)elementTextRange;	// 0x333f0369
- (id)elementsForRange:(NSRange)range;	// 0x333ef961
- (CGRect)frameForTextMarkers:(id)textMarkers;	// 0x333eeba9
- (int)indexOfAccessibilityElement:(id)accessibilityElement;	// 0x333f3889
- (BOOL)isAccessibilityElement;	// 0x333c2f41
- (BOOL)isAttachment;	// 0x333c3549
- (id)lineEndMarkerForMarker:(id)marker;	// 0x333ef4c5
- (id)lineStartMarkerForMarker:(id)marker;	// 0x333ef2e5
- (id)nextMarkerForMarker:(id)marker;	// 0x333ef109
- (int)positionForTextMarker:(id)textMarker;	// 0x333f06d5
- (void)postChildrenChangedNotification;	// 0x333ee59d
- (void)postFocusChangeNotification;	// 0x333ee589
- (void)postLayoutChangeNotification;	// 0x333ee591
- (void)postLiveRegionChangeNotification;	// 0x333ee595
- (void)postLoadCompleteNotification;	// 0x333ee599
- (void)postSelectedTextChangeNotification;	// 0x333ee58d
- (id)previousMarkerForMarker:(id)marker;	// 0x333eef2d
- (id)selectedTextMarker;	// 0x333ef6a5
- (id)selectionRangeString;	// 0x333ef931
- (id)stringForRange:(NSRange)range;	// 0x333efb15
- (id)stringForTextMarkers:(id)textMarkers;	// 0x333f1a05
- (BOOL)stringValueShouldBeUsedInLabel;	// 0x333c5cb5
- (AccessibilityTableCell *)tableCellParent;	// 0x333ee511
- (AccessibilityTable *)tableParent;	// 0x333ee54d
- (id)textMarkerForPoint:(CGPoint)point;	// 0x333eea45
- (id)textMarkerForPosition:(int)position;	// 0x333efd7d
- (id)textMarkerRange;	// 0x333f042d
- (id)textMarkerRangeForSelection;	// 0x333effa1
@end

