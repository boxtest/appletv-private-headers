/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIImage, NSString, NSURL, NSArray, UIColor;

@interface UIPasteboard : NSObject {
@private
	NSString *_name;	// 4 = 0x4
}
@property(copy, nonatomic) NSURL *URL;	// G=0x32f1a5bd; S=0x32f1a57d; 
@property(copy, nonatomic) NSArray *URLs;	// G=0x32f1a705; S=0x32f1a5f9; 
@property(readonly, assign, nonatomic) int changeCount;	// G=0x32f1a1a9; 
@property(copy, nonatomic) UIColor *color;	// G=0x32f1ab8d; S=0x32f1ab4d; 
@property(copy, nonatomic) NSArray *colors;	// G=0x32f1acd5; S=0x32f1abc9; 
@property(copy, nonatomic) UIImage *image;	// G=0x32f1a785; S=0x32f1a745; 
@property(copy, nonatomic) NSArray *images;	// G=0x32f1a999; S=0x32f1a88d; 
@property(copy, nonatomic) NSArray *items;	// G=0x32f1a1bd; S=0x32f1a335; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x32f19625; 
@property(readonly, assign, nonatomic) int numberOfItems;	// G=0x32d91a8d; 
@property(assign, nonatomic, getter=isPersistent) BOOL persistent;	// G=0x32f1a179; S=0x32f1a195; 
@property(copy, nonatomic) NSString *string;	// G=0x32f1a3f5; S=0x32f1a3b5; 
@property(copy, nonatomic) NSArray *strings;	// G=0x32f1a53d; S=0x32f1a431; 
+ (id)_findPasteboard;	// 0x32f1ad15
+ (id)_printPasteboard;	// 0x32f1ad6d
+ (id)generalPasteboard;	// 0x32d727c1
+ (id)pasteboardWithName:(id)name create:(BOOL)create;	// 0x32f19265
+ (id)pasteboardWithUniqueName;	// 0x32f193e1
+ (void)removePasteboardWithName:(id)name;	// 0x32f194c5
- (id)init;	// 0x32f19549
// declared property getter: - (id)URL;	// 0x32f1a5bd
// declared property getter: - (id)URLs;	// 0x32f1a705
- (id)_initWithName:(id)name system:(BOOL)system create:(BOOL)create;	// 0x32d72819
- (void)_pasteboardChanged:(id)changed;	// 0x32f1adc5
- (void)addItems:(id)items;	// 0x32f19fa9
// declared property getter: - (int)changeCount;	// 0x32f1a1a9
// declared property getter: - (id)color;	// 0x32f1ab8d
// declared property getter: - (id)colors;	// 0x32f1acd5
- (BOOL)containsPasteboardTypes:(id)types;	// 0x32d72c11
- (BOOL)containsPasteboardTypes:(id)types inItemSet:(id)itemSet;	// 0x32d91bd9
- (id)dataForPasteboardType:(id)pasteboardType;	// 0x32f19689
- (id)dataForPasteboardType:(id)pasteboardType inItemSet:(id)itemSet;	// 0x32f19ea1
- (void)dealloc;	// 0x32f195c5
// declared property getter: - (id)image;	// 0x32f1a785
// declared property getter: - (id)images;	// 0x32f1a999
// declared property getter: - (BOOL)isPersistent;	// 0x32f1a179
- (id)itemSetWithPasteboardTypes:(id)pasteboardTypes;	// 0x32f19d09
// declared property getter: - (id)items;	// 0x32f1a1bd
// declared property getter: - (id)name;	// 0x32f19625
// declared property getter: - (int)numberOfItems;	// 0x32d91a8d
- (id)pasteboardTypes;	// 0x32f1965d
- (id)pasteboardTypesForItemSet:(id)itemSet;	// 0x32f19c29
// declared property setter: - (void)setColor:(id)color;	// 0x32f1ab4d
// declared property setter: - (void)setColors:(id)colors;	// 0x32f1abc9
- (void)setData:(id)data forPasteboardType:(id)pasteboardType;	// 0x32f19b95
// declared property setter: - (void)setImage:(id)image;	// 0x32f1a745
// declared property setter: - (void)setImages:(id)images;	// 0x32f1a88d
// declared property setter: - (void)setItems:(id)items;	// 0x32f1a335
// declared property setter: - (void)setPersistent:(BOOL)persistent;	// 0x32f1a195
// declared property setter: - (void)setString:(id)string;	// 0x32f1a3b5
// declared property setter: - (void)setStrings:(id)strings;	// 0x32f1a431
// declared property setter: - (void)setURL:(id)url;	// 0x32f1a57d
// declared property setter: - (void)setURLs:(id)urls;	// 0x32f1a5f9
- (void)setValue:(id)value forPasteboardType:(id)pasteboardType;	// 0x32f19985
// declared property getter: - (id)string;	// 0x32f1a3f5
// declared property getter: - (id)strings;	// 0x32f1a53d
- (id)valueForPasteboardType:(id)pasteboardType;	// 0x32f196b5
- (id)valuesForPasteboardType:(id)pasteboardType inItemSet:(id)itemSet;	// 0x32f19d9d
@end

