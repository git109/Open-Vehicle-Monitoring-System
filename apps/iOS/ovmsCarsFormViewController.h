//
//  ovmsCarsFormViewController.h
//  ovms
//
//  Created by Mark Webb-Johnson on 23/11/11.
//  Copyright (c) 2011 Hong Hay Villa. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ovmsCarsFormViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *vehicleid;
@property (strong, nonatomic) IBOutlet UITextField *vehiclelabel;
@property (strong, nonatomic) IBOutlet UITextField *vehiclepassword;
@property (strong, nonatomic) IBOutlet UIPickerView *vehiclepicker;

@end
