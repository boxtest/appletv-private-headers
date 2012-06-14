/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UITextField, UIButton, NSArray, UIColor, UIImage, NSString, UILabel;
@protocol UISearchBarDelegate;

@interface UISearchBar : UIView {
@private
	UITextField *_searchField;	// 48 = 0x30
	UILabel *_promptLabel;	// 52 = 0x34
	UIButton *_cancelButton;	// 56 = 0x38
	id<UISearchBarDelegate> _delegate;	// 60 = 0x3c
	id _controller;	// 64 = 0x40
	UIColor *_tintColor;	// 68 = 0x44
	UIImageView *_separator;	// 72 = 0x48
	NSString *_cancelButtonText;	// 76 = 0x4c
	NSArray *_scopes;	// 80 = 0x50
	int _selectedScope;	// 84 = 0x54
	UIView *_background;	// 88 = 0x58
	UIView *_scopeBar;	// 92 = 0x5c
	UIEdgeInsets _contentInset;	// 96 = 0x60
	id _appearanceStorage;	// 112 = 0x70
	struct {
		unsigned barStyle : 3;
		unsigned showsBookmarkButton : 1;
		unsigned showsCancelButton : 1;
		unsigned isTranslucent : 1;
		unsigned autoDisableCancelButton : 1;
		unsigned showsScopeBar : 1;
		unsigned hideBackground : 1;
		unsigned combinesLandscapeBars : 1;
		unsigned usesEmbeddedAppearance : 1;
		unsigned showsSearchResultsButton : 1;
		unsigned searchResultsButtonSelected : 1;
		unsigned pretendsIsInBar : 1;
		unsigned disabled : 1;
	} _searchBarFlags;	// 116 = 0x74
}
@property(assign, nonatomic) int autocapitalizationType;	// G=0x3313cdc9; S=0x32f6e96d; 
@property(assign, nonatomic) int autocorrectionType;	// G=0x3313cde9; S=0x32f08d65; 
@property(retain, nonatomic) UIImage *backgroundImage;	// G=0x3313d1f9; S=0x32f8bdd9; 
@property(assign, nonatomic) int barStyle;	// G=0x32ff8d11; S=0x32f8afa1; 
@property(retain) UIButton *cancelButton;	// G=0x3313cdb9; S=0x3313cd61; converted property
@property(assign) BOOL combinesLandscapeBars;	// G=0x3313cd39; S=0x32f095e9; converted property
@property(assign) UIEdgeInsets contentInset;	// G=0x3313cf31; S=0x32f0a371; converted property
@property(retain) id controller;	// G=0x330548e9; S=0x32f093fd; converted property
@property(assign, nonatomic) id<UISearchBarDelegate> delegate;	// G=0x3313d979; S=0x32f08a61; @synthesize=_delegate
@property(assign) BOOL drawsBackground;	// G=0x32f26d15; S=0x3313cccd; converted property
@property(assign, nonatomic) int keyboardType;	// G=0x3313ce49; S=0x32f6e94d; 
@property(copy, nonatomic) NSString *placeholder;	// G=0x32f0960d; S=0x32f08a71; 
@property(assign) BOOL pretendsIsInBar;	// G=0x3313d999; S=0x3313d9ad; converted property
@property(copy, nonatomic) NSString *prompt;	// G=0x3313cb6d; S=0x3313caf5; 
@property(retain, nonatomic) UIImage *scopeBarBackgroundImage;	// G=0x3313d4dd; S=0x3313d489; 
@property(copy, nonatomic) NSArray *scopeButtonTitles;	// G=0x3313cf55; S=0x32f67d55; 
@property(readonly, retain) UITextField *searchField;	// G=0x32ffac95; converted property
@property(assign, nonatomic) UIOffset searchFieldBackgroundPositionAdjustment;	// G=0x3313d7dd; S=0x3313d68d; 
@property(assign, nonatomic, getter=isSearchResultsButtonSelected) BOOL searchResultsButtonSelected;	// G=0x3313cc31; S=0x3313cbe9; 
@property(assign, nonatomic) UIOffset searchTextPositionAdjustment;	// G=0x3313d87d; S=0x3313d831; 
@property(assign, nonatomic) int selectedScopeButtonIndex;	// G=0x3313cf8d; S=0x32f67d19; 
@property(assign) int shortcutConversionType;	// G=0x3313ce89; S=0x3313ce69; converted property
@property(assign, nonatomic) BOOL showsBookmarkButton;	// G=0x3313cc8d; S=0x3313cc45; 
@property(assign, nonatomic) BOOL showsCancelButton;	// G=0x3301d611; S=0x32f563c9; 
@property(assign, nonatomic) BOOL showsScopeBar;	// G=0x3313cfbd; S=0x32f6e98d; 
@property(assign, nonatomic) BOOL showsSearchResultsButton;	// G=0x3313cbd5; S=0x3313cb8d; 
@property(assign, nonatomic) int spellCheckingType;	// G=0x3313ce29; S=0x3313ce09; 
@property(copy, nonatomic) NSString *text;	// G=0x32f8b365; S=0x32ffbd15; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x3313d989; S=0x3313d1e5; @synthesize=_tintColor
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;	// G=0x32ff8ced; S=0x3313ca91; 
@property(assign) BOOL usesEmbeddedAppearance;	// G=0x3313cd4d; S=0x32f09431; converted property
- (id)initWithCoder:(id)coder;	// 0x3313be59
- (id)initWithFrame:(CGRect)frame;	// 0x32f0464d
- (float)_availableBoundsWidth;	// 0x32f26dfd
- (void)_bookmarkButtonPressed;	// 0x3313dcf5
- (void)_cancelButtonPressed;	// 0x32ffbaed
- (id)_currentSeparatorImage;	// 0x32f08e49
- (void)_destroyCancelButton;	// 0x32ffbfa9
- (void)_hideShowAnimationDidFinish;	// 0x3313cca1
- (id)_imageForSearchBarIcon:(int)searchBarIcon state:(unsigned)state;	// 0x32f07229
- (BOOL)_isEnabled;	// 0x3313de29
- (BOOL)_isInBar;	// 0x32f09071
- (float)_landscapeScopeBarWidth;	// 0x3313cee5
- (float)_landscapeSearchFieldWidth;	// 0x3313cea9
- (void)_populateArchivedSubviews:(id)subviews;	// 0x3313c52d
- (void)_resultsListButtonPressed;	// 0x3313dd3d
- (id)_scopeBar;	// 0x3301bf59
- (void)_scopeChanged:(id)changed;	// 0x3313cfd5
- (void)_searchFieldBeginEditing;	// 0x32ff8829
- (void)_searchFieldEditingChanged;	// 0x32ffaaed
- (void)_searchFieldEndEditing;	// 0x32ffbe45
- (float)_searchFieldHeight;	// 0x32f26da5
- (void)_searchFieldReturnPressed;	// 0x3301d3f5
- (void)_setAutoDisableCancelButton:(BOOL)button;	// 0x32f0940d
- (void)_setCancelButtonText:(id)text;	// 0x3313dc9d
- (void)_setEnabled:(BOOL)enabled;	// 0x3313de41
- (void)_setEnabled:(BOOL)enabled animated:(BOOL)animated;	// 0x3313de55
- (void)_setScopeBarHidden:(BOOL)hidden;	// 0x3313cf9d
- (void)_setShowsCancelButton:(BOOL)button;	// 0x32ff8ee5
- (void)_setShowsSeparator:(BOOL)separator;	// 0x32f08d85
- (void)_setTintColor:(id)color forceUpdate:(BOOL)update;	// 0x3313d06d
- (void)_setUpScopeBar;	// 0x32f67eed
- (void)_setupCancelButton;	// 0x3313dce1
- (void)_setupCancelButtonWithAppearance:(id)appearance;	// 0x32ff88e1
- (void)_setupPromptLabel;	// 0x3313d9d1
- (void)_setupSearchField;	// 0x32f0474d
- (BOOL)_shouldCombineLandscapeBars;	// 0x32f26bd5
- (void)_updateMagnifyingGlassView;	// 0x32f07191
- (void)_updateOpacity;	// 0x32f26d31
- (void)_updateRightView;	// 0x32f07341
- (void)_updateSearchFieldArt;	// 0x32f08275
// declared property getter: - (int)autocapitalizationType;	// 0x3313cdc9
// declared property getter: - (int)autocorrectionType;	// 0x3313cde9
// declared property getter: - (id)backgroundImage;	// 0x3313d1f9
// declared property getter: - (int)barStyle;	// 0x32ff8d11
- (BOOL)becomeFirstResponder;	// 0x3313dde1
- (BOOL)canBecomeFirstResponder;	// 0x3313ddbd
- (BOOL)canResignFirstResponder;	// 0x3313de05
// converted property getter: - (id)cancelButton;	// 0x3313cdb9
// converted property getter: - (BOOL)combinesLandscapeBars;	// 0x3313cd39
// converted property getter: - (UIEdgeInsets)contentInset;	// 0x3313cf31
// converted property getter: - (id)controller;	// 0x330548e9
- (void)dealloc;	// 0x330228d9
// declared property getter: - (id)delegate;	// 0x3313d979
// converted property getter: - (BOOL)drawsBackground;	// 0x32f26d15
- (void)encodeWithCoder:(id)coder;	// 0x3313c62d
- (id)imageForSearchBarIcon:(int)searchBarIcon state:(unsigned)state;	// 0x3313d43d
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x33149631
- (BOOL)isFirstResponder;	// 0x32ee88f5
// declared property getter: - (BOOL)isSearchResultsButtonSelected;	// 0x3313cc31
// declared property getter: - (BOOL)isTranslucent;	// 0x32ff8ced
// declared property getter: - (int)keyboardType;	// 0x3313ce49
- (void)layoutSubviews;	// 0x32f26205
- (void)movedToSuperview:(id)superview;	// 0x32f0a10d
// declared property getter: - (id)placeholder;	// 0x32f0960d
- (UIOffset)positionAdjustmentForSearchBarIcon:(int)searchBarIcon;	// 0x3313d921
// converted property getter: - (BOOL)pretendsIsInBar;	// 0x3313d999
// declared property getter: - (id)prompt;	// 0x3313cb6d
- (void)reloadInputViews;	// 0x3313dd9d
- (BOOL)resignFirstResponder;	// 0x32f5a01d
// declared property getter: - (id)scopeBarBackgroundImage;	// 0x3313d4dd
- (id)scopeBarButtonBackgroundImageForState:(unsigned)state;	// 0x3313d559
- (id)scopeBarButtonDividerImageForLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state;	// 0x3313d5e5
- (id)scopeBarButtonTitleTextAttributesForState:(unsigned)state;	// 0x3313d66d
// declared property getter: - (id)scopeButtonTitles;	// 0x3313cf55
// converted property getter: - (id)searchField;	// 0x32ffac95
- (id)searchFieldBackgroundImageForState:(unsigned)state;	// 0x3313d2e1
// declared property getter: - (UIOffset)searchFieldBackgroundPositionAdjustment;	// 0x3313d7dd
// declared property getter: - (UIOffset)searchTextPositionAdjustment;	// 0x3313d87d
// declared property getter: - (int)selectedScopeButtonIndex;	// 0x3313cf8d
// declared property setter: - (void)setAutocapitalizationType:(int)type;	// 0x32f6e96d
// declared property setter: - (void)setAutocorrectionType:(int)type;	// 0x32f08d65
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x32f8bdd9
// declared property setter: - (void)setBarStyle:(int)style;	// 0x32f8afa1
// converted property setter: - (void)setCancelButton:(id)button;	// 0x3313cd61
// converted property setter: - (void)setCombinesLandscapeBars:(BOOL)bars;	// 0x32f095e9
// converted property setter: - (void)setContentInset:(UIEdgeInsets)inset;	// 0x32f0a371
// converted property setter: - (void)setController:(id)controller;	// 0x32f093fd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32f08a61
// converted property setter: - (void)setDrawsBackground:(BOOL)background;	// 0x3313cccd
- (void)setImage:(id)image forSearchBarIcon:(int)searchBarIcon state:(unsigned)state;	// 0x3313d32d
// declared property setter: - (void)setKeyboardType:(int)type;	// 0x32f6e94d
// declared property setter: - (void)setPlaceholder:(id)placeholder;	// 0x32f08a71
- (void)setPositionAdjustment:(UIOffset)adjustment forSearchBarIcon:(int)searchBarIcon;	// 0x3313d8d1
// converted property setter: - (void)setPretendsIsInBar:(BOOL)bar;	// 0x3313d9ad
// declared property setter: - (void)setPrompt:(id)prompt;	// 0x3313caf5
// declared property setter: - (void)setScopeBarBackgroundImage:(id)image;	// 0x3313d489
- (void)setScopeBarButtonBackgroundImage:(id)image forState:(unsigned)state;	// 0x3313d4fd
- (void)setScopeBarButtonDividerImage:(id)image forLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state;	// 0x3313d579
- (void)setScopeBarButtonTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x3313d615
// declared property setter: - (void)setScopeButtonTitles:(id)titles;	// 0x32f67d55
- (void)setSearchFieldBackgroundImage:(id)image forState:(unsigned)state;	// 0x3313d219
// declared property setter: - (void)setSearchFieldBackgroundPositionAdjustment:(UIOffset)adjustment;	// 0x3313d68d
// declared property setter: - (void)setSearchResultsButtonSelected:(BOOL)selected;	// 0x3313cbe9
// declared property setter: - (void)setSearchTextPositionAdjustment:(UIOffset)adjustment;	// 0x3313d831
// declared property setter: - (void)setSelectedScopeButtonIndex:(int)index;	// 0x32f67d19
// converted property setter: - (void)setShortcutConversionType:(int)type;	// 0x3313ce69
// declared property setter: - (void)setShowsBookmarkButton:(BOOL)button;	// 0x3313cc45
// declared property setter: - (void)setShowsCancelButton:(BOOL)button;	// 0x32f563c9
- (void)setShowsCancelButton:(BOOL)button animated:(BOOL)animated;	// 0x32f563dd
// declared property setter: - (void)setShowsScopeBar:(BOOL)bar;	// 0x32f6e98d
// declared property setter: - (void)setShowsSearchResultsButton:(BOOL)button;	// 0x3313cb8d
// declared property setter: - (void)setSpellCheckingType:(int)type;	// 0x3313ce09
// declared property setter: - (void)setText:(id)text;	// 0x32ffbd15
// declared property setter: - (void)setTintColor:(id)color;	// 0x3313d1e5
// declared property setter: - (void)setTranslucent:(BOOL)translucent;	// 0x3313ca91
// converted property setter: - (void)setUsesEmbeddedAppearance:(BOOL)appearance;	// 0x32f09431
// converted property getter: - (int)shortcutConversionType;	// 0x3313ce89
// declared property getter: - (BOOL)showsBookmarkButton;	// 0x3313cc8d
// declared property getter: - (BOOL)showsCancelButton;	// 0x3301d611
// declared property getter: - (BOOL)showsScopeBar;	// 0x3313cfbd
// declared property getter: - (BOOL)showsSearchResultsButton;	// 0x3313cbd5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32f08ec5
// declared property getter: - (int)spellCheckingType;	// 0x3313ce29
// declared property getter: - (id)text;	// 0x32f8b365
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;	// 0x32ff9ff1
- (BOOL)textFieldShouldBeginEditing:(id)textField;	// 0x32ff8329
- (BOOL)textFieldShouldEndEditing:(id)textField;	// 0x32ffbdf9
// declared property getter: - (id)tintColor;	// 0x3313d989
// converted property getter: - (BOOL)usesEmbeddedAppearance;	// 0x3313cd4d
- (void)willMoveToSuperview:(id)superview;	// 0x32f0a02d
@end
