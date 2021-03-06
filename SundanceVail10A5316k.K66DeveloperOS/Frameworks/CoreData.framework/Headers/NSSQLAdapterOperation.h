/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSSQLRow, NSSQLCorrelation;

__attribute__((visibility("hidden")))
@interface NSSQLAdapterOperation : NSObject {
@private
	unsigned _adapterOperator;	// 4 = 0x4
	NSSQLRow *_row;	// 8 = 0x8
	NSSQLCorrelation *_correlation;	// 12 = 0xc
}
@property(assign) unsigned adapterOperator;	// G=0x32da93d9; S=0x32da93e9; converted property
@property(readonly, retain) NSSQLCorrelation *correlation;	// G=0x32da945d; converted property
@property(readonly, retain) NSSQLRow *row;	// G=0x32da946d; converted property
- (id)initWithAdapterOperator:(unsigned)adapterOperator correlation:(id)correlation;	// 0x32da9335
- (id)initWithAdapterOperator:(unsigned)adapterOperator row:(id)row;	// 0x32da92d1
- (id)_opString;	// 0x32da9525
// converted property getter: - (unsigned)adapterOperator;	// 0x32da93d9
- (int)compareAdapterOperation:(id)operation;	// 0x32da947d
// converted property getter: - (id)correlation;	// 0x32da945d
- (void)dealloc;	// 0x32da9375
- (id)description;	// 0x32da95a1
- (id)entity;	// 0x32da93f9
// converted property getter: - (id)row;	// 0x32da946d
// converted property setter: - (void)setAdapterOperator:(unsigned)anOperator;	// 0x32da93e9
@end

