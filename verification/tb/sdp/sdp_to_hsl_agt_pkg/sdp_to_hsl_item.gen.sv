`ifndef SDP_TO_HSL_ITEM__SV
`define SDP_TO_HSL_ITEM__SV

class sdp_to_hsl_item extends uvm_sequence_item;

   typedef enum {READ, WRITE } kinds_e;
   rand kinds_e kind;
   typedef enum {IS_OK, ERROR} status_e;
   rand status_e status;

   // ToDo: Add constraint blocks to prevent error injection
   // ToDo: Add relevant class properties to define all transactions
   // ToDo: Modify/add symbolic transaction identifiers to match

   constraint sdp_to_hsl_item_valid {
      // ToDo: Define constraint to make descriptor valid
      status == IS_OK;
   }
    
   `uvm_object_utils_begin(sdp_to_hsl_item) 

      // ToDo: add properties using macros here
   
      `uvm_field_enum(kinds_e,kind,UVM_ALL_ON)
      `uvm_field_enum(status_e,status, UVM_ALL_ON)
   `uvm_object_utils_end
 
   function new(string name = "sdp_to_hsl_item");
      super.new(name);
   endfunction: new

endclass: sdp_to_hsl_item

`endif // SDP_TO_HSL_ITEM__SV
