/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <NSObject.h> // Unknown library


@interface WebAccessibilityObjectWrapper : NSObject {
	AccessibilityObject *m_object;	// 4 = 0x4
	int m_isAccessibilityElement;	// 8 = 0x8
	unsigned long long m_accessibilityTraitsFromAncestor;	// 12 = 0xc
}
- (id)initWithAccessibilityObject:(AccessibilityObject *)accessibilityObject;	// 0x3534d279
- (void)_accessibilityActivate;	// 0x353d2bb9
- (BOOL)_accessibilityIsLandmarkRole:(int)role;	// 0x3535d6a1
- (WebAccessibilityObjectWrapper *)_accessibilityLandmarkAncestor;	// 0x353d14cd
- (WebAccessibilityObjectWrapper *)_accessibilityListAncestor;	// 0x353d1489
- (id)_accessibilityNextElementsWithCount:(unsigned long)count;	// 0x353d27fd
- (id)_accessibilityParentForSubview:(id)subview;	// 0x353d2bf1
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)count;	// 0x353d2849
- (WebAccessibilityObjectWrapper *)_accessibilityTableAncestor;	// 0x353d1529
- (unsigned long long)_accessibilityTraitsFromAncestors;	// 0x3535cfa5
- (id)_accessibilityWebDocumentView;	// 0x353d273d
- (BOOL)_addAccessibilityObject:(AccessibilityObject *)object toTextMarkerArray:(id)textMarkerArray;	// 0x353d3161
- (unsigned long long)_axAdjustableTrait;	// 0x353d0e81
- (unsigned long long)_axButtonTrait;	// 0x353d0e61
- (unsigned long long)_axContainedByLandmarkTrait;	// 0x353d0e21
- (unsigned long long)_axContainedByListTrait;	// 0x353d0e11
- (unsigned long long)_axContainedByTableTrait;	// 0x353d0e19
- (unsigned long long)_axHasTextCursorTrait;	// 0x353d0e41
- (unsigned long long)_axHeaderTrait;	// 0x353d0e09
- (unsigned long long)_axImageTrait;	// 0x353d0e51
- (unsigned long long)_axLinkTrait;	// 0x353d0df9
- (unsigned long long)_axMenuItemTrait;	// 0x353d0e89
- (unsigned long long)_axNotEnabledTrait;	// 0x353d0e99
- (unsigned long long)_axPopupButtonTrait;	// 0x353d0e71
- (unsigned long long)_axRadioButtonTrait;	// 0x353d0ea1
- (unsigned long long)_axSecureTextFieldTrait;	// 0x353d0e31
- (unsigned long long)_axSelectedTrait;	// 0x353d0e91
- (unsigned long long)_axStaticTextTrait;	// 0x353d0e79
- (unsigned long long)_axTabButtonTrait;	// 0x353d0e59
- (unsigned long long)_axTextEntryTrait;	// 0x353d0e39
- (unsigned long long)_axTextOperationsAvailableTrait;	// 0x353d0e49
- (unsigned long long)_axToggleTrait;	// 0x353d0e69
- (unsigned long long)_axVisitedTrait;	// 0x353d0e01
- (unsigned long long)_axWebContentTrait;	// 0x353d0e29
- (CGRect)_convertIntRectToScreenCoordinates:(IntRect)screenCoordinates;	// 0x353d23d1
- (PassRefPtr<WebCore::Range>)_convertToDOMRange:(NSRange)domrange;	// 0x353d4a7d
- (NSRange)_convertToNSRange:(Range *)nsrange;	// 0x353d46cd
- (BOOL)_prepareAccessibilityCall;	// 0x3535c861
- (id)_stringForRange:(NSRange)range attributed:(BOOL)attributed;	// 0x353d5659
- (BOOL)accessibilityARIAIsBusy;	// 0x353d6985
- (BOOL)accessibilityARIALiveRegionIsAtomic;	// 0x353d6a71
- (id)accessibilityARIALiveRegionStatus;	// 0x353d69c1
- (id)accessibilityARIARelevantStatus;	// 0x353d6a19
- (CGPoint)accessibilityActivationPoint;	// 0x353d25bd
- (BOOL)accessibilityCanFuzzyHitTest;	// 0x353d0ea9
- (NSRange)accessibilityColumnRange;	// 0x353d1af1
- (id)accessibilityContainer;	// 0x35360951
- (void)accessibilityDecreaseSelection:(int)selection;	// 0x353d2f79
- (void)accessibilityDecrement;	// 0x353d3125
- (id)accessibilityElementAtIndex:(int)index;	// 0x3535f8c5
- (int)accessibilityElementCount;	// 0x3535d6f5
- (void)accessibilityElementDidBecomeFocused;	// 0x353d2c8d
- (id)accessibilityElementForRow:(int)row andColumn:(int)column;	// 0x353d190d
- (CGRect)accessibilityElementRect;	// 0x353d2529
- (id)accessibilityFlowToElements;	// 0x353d28d1
- (id)accessibilityFocusedUIElement;	// 0x353d26f5
- (CGRect)accessibilityFrame;	// 0x353d2665
- (id)accessibilityHeaderElements;	// 0x353d1629
- (id)accessibilityHint;	// 0x353d20d1
- (id)accessibilityHitTest:(CGPoint)test;	// 0x353d0f71
- (id)accessibilityIdentifier;	// 0x353d6895
- (void)accessibilityIncreaseSelection:(int)selection;	// 0x353d2f65
- (void)accessibilityIncrement;	// 0x353d30e9
- (id)accessibilityInvalidStatus;	// 0x353d6aad
- (BOOL)accessibilityIsComboBox;	// 0x353d2091
- (id)accessibilityLabel;	// 0x3535fbd9
- (id)accessibilityLanguage;	// 0x353d1309
- (id)accessibilityLinkedElement;	// 0x353d2a79
- (void)accessibilityModifySelection:(int)selection increase:(BOOL)increase;	// 0x353d2cfd
- (void)accessibilityMoveSelectionToMarker:(id)marker;	// 0x353d2f8d
- (AccessibilityObject *)accessibilityObject;	// 0x35360a8d
- (WebAccessibilityObjectWrapper *)accessibilityObjectForTextMarker:(id)textMarker;	// 0x353d5045
- (id)accessibilityPlaceholderValue;	// 0x353d1b4d
- (WebAccessibilityObjectWrapper *)accessibilityPostProcessHitTest:(CGPoint)test;	// 0x353d0f6d
- (void)accessibilityPostedNotification:(int)notification;	// 0x35358ac1
- (BOOL)accessibilityRequired;	// 0x353d2895
- (NSRange)accessibilityRowRange;	// 0x353d1969
- (void)accessibilitySetPostedNotificationCallback:(/*function-pointer*/ void *)callback withContext:(void *)context;	// 0x353d6b05
- (id)accessibilitySpeechHint;	// 0x353d68f5
- (id)accessibilityTitleElement;	// 0x353d15e1
- (unsigned long long)accessibilityTraits;	// 0x3535cac5
- (id)accessibilityURL;	// 0x353d2255
- (id)accessibilityValue;	// 0x353d1ba1
- (id)arrayOfTextForTextMarkers:(id)textMarkers attributed:(BOOL)attributed;	// 0x353d35c9
- (id)attachmentView;	// 0x35360afd
- (id)attributedStringForRange:(NSRange)range;	// 0x353d5875
- (BOOL)containsUnnaturallySegmentedChildren;	// 0x35360b49
- (void)dealloc;	// 0x3536bd1d
- (void)detach;	// 0x35367241
- (BOOL)determineIsAccessibilityElement;	// 0x3535c8f1
- (NSRange)elementTextRange;	// 0x353d4f91
- (id)elementsForRange:(NSRange)range;	// 0x353d5899
- (CGRect)frameForTextMarkers:(id)textMarkers;	// 0x353d63b5
- (int)indexOfAccessibilityElement:(id)accessibilityElement;	// 0x353d1119
- (BOOL)isAccessibilityElement;	// 0x3535c811
- (BOOL)isAttachment;	// 0x3535d76d
- (id)lineEndMarkerForMarker:(id)marker;	// 0x353d5cd5
- (id)lineStartMarkerForMarker:(id)marker;	// 0x353d5e91
- (id)nextMarkerForMarker:(id)marker;	// 0x353d604d
- (int)positionForTextMarker:(id)textMarker;	// 0x353d4af1
- (void)postChildrenChangedNotification;	// 0x353d2c85
- (void)postFocusChangeNotification;	// 0x353d2c71
- (void)postInvalidStatusChangedNotification;	// 0x353d2c89
- (void)postLayoutChangeNotification;	// 0x353d2c79
- (void)postLiveRegionChangeNotification;	// 0x353d2c7d
- (void)postLoadCompleteNotification;	// 0x353d2c81
- (void)postSelectedTextChangeNotification;	// 0x353d2c75
- (id)previousMarkerForMarker:(id)marker;	// 0x353d6201
- (id)selectedTextMarker;	// 0x353d5a6d
- (id)selectionRangeString;	// 0x353d5a3d
- (id)stringForRange:(NSRange)range;	// 0x353d5851
- (id)stringForTextMarkers:(id)textMarkers;	// 0x353d31e5
- (BOOL)stringValueShouldBeUsedInLabel;	// 0x35360459
- (AccessibilityTableCell *)tableCellParent;	// 0x353d1569
- (AccessibilityTable *)tableParent;	// 0x353d15a5
- (id)textMarkerForPoint:(CGPoint)point;	// 0x353d672d
- (id)textMarkerForPosition:(int)position;	// 0x353d53f1
- (id)textMarkerRange;	// 0x353d4d01
- (id)textMarkerRangeForSelection;	// 0x353d5185
@end
